//
//  MessageModel.m
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "MessageModel.h"


@implementation MessageModel
//初始化
+ (instancetype)shareInstance
{
    id obj = [super  shareInstance];
    u_int propertyCount = 0;
    objc_property_t *properties = class_copyPropertyList([obj class], &propertyCount);
    
    for (unsigned int i = 0; i < propertyCount; ++i) {
        objc_property_t property = properties[i];
        const char * attributes = property_getAttributes(property);//获取属性类型
        NSString *propertyName = [NSString stringWithUTF8String:attributes];
        if([propertyName rangeOfString:@"NSString"].location!=NSNotFound){
            //        if ([propertyName containsString:@"NSString"]) {
            const char * name = property_getName(property);//获取属性名字
            NSString *pcName = [NSString stringWithUTF8String:name];
            [obj setValue:@"" forKey:pcName];
        }
    }
    free(properties);
    return obj;
}

- (void)setValue:(id)value forKey:(NSString *)key
{
    [super setValue:value forKey:key];
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    
}
@end

@implementation BannerListModel

@end

@implementation RoomDesModel

@end

@implementation HouseDetailModel

@end

@implementation RoomListModel

@end

@implementation PicListModel

@end

@implementation FacilityListModel

@end

@implementation RoomPayModel

@end


@implementation RentDurationModel

@end

@implementation RoomDetailsModel

@end

@implementation PictureModel

@end

@implementation UserInfoModel

@end

@implementation BillTotalModel

@end

@implementation MessageTypeModel

@end

@implementation SystemMessageModel

@end

@implementation  IndustryModel

@end

@implementation ContractBaseModel


@end

@implementation ContractModel

@end

@implementation CouponModel

@end

@implementation ContractDoModel

@end

@implementation PayListModel

@end

@implementation AlipayModel

@end

@implementation WechatModel

@end

@implementation ContactListModel

@end

@implementation CouponExchangeModel @end

@implementation CouponListModel
-(double) finalFee:(double) grossAmount
{
    if (self.couponType==1) {
        return grossAmount - self.disAmount;
    }else if (self.couponType==2){
        return grossAmount*self.disAmount ;
    }
    return 0;
}

-(double) discountFee:(double) Amount
{
    if (self.couponType==1) {
        return self.disAmount;
    }else if (self.couponType==2){
        return Amount*(1.0-self.disAmount) ;
    }
    return 0;
}

@end

@implementation HouseRModel

@end

@implementation ContenantModel

@end

@implementation MyServiceBaseModel

@end

@implementation MovingListModel

@end

@implementation CleanningListModel

@end

@implementation RepairListModel

@end

@implementation WifiModel

@end


@implementation BuildingListModel

@end

@implementation AdviceModel

- (CGFloat)cellHeight
{
    if (_cellHeight == 0) {
        CGFloat textX = 15;
        CGFloat textY = 114;
        CGFloat space = 15;
        CGFloat showSpace = 20;
        CGFloat divideSpace = 19;
        CGFloat maxTextW = [UIScreen mainScreen].bounds.size.width - 2 * space;
        CGFloat maxshowTextW = [UIScreen mainScreen].bounds.size.width - 2 * showSpace;
        CGSize maxTextSize = CGSizeMake(maxTextW, MAXFLOAT);
        CGSize maxshowTextSize = CGSizeMake(maxshowTextW, MAXFLOAT);
        CGFloat textH = [_reply boundingRectWithSize:maxTextSize options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName : [UIFont systemFontOfSize:14]} context:nil].size.height;
        CGFloat showtextH = [_content boundingRectWithSize:maxshowTextSize options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName : [UIFont systemFontOfSize:14]} context:nil].size.height;
        self.feedbackFrame = CGRectMake(textX, textY, maxTextW, textH);
        self.showFrame = CGRectMake(showSpace, CGRectGetMaxY(self.feedbackFrame)+space, maxshowTextW, showtextH);
        _cellHeight = CGRectGetMaxY(self.showFrame)+ divideSpace;
    }
    
    return _cellHeight;
}
@end

@implementation ApartListModel

@end

@implementation MainApartListModel @end

@implementation MainRoomListModel @end;

@implementation CardListModel

//+ (NSDictionary *)mj_objectClassInArray
//{
//   return @{@"industryList":@"IndustryModel"};
//}

@end

@implementation VersionModel

@end

@implementation ApartDetailModel

@end

@implementation RentListModel

@end

@implementation StyleListModel

@end

@implementation FloorsListModel

@end

@implementation TowardsListModel

@end

@implementation RentTypeListModel

@end

@implementation PriceRangeModel

@end

@implementation RoomPrepareModel

@end

@implementation CanlendarModel

@end

@implementation LongRentBaseModel

@end

@implementation ContractListModel

@end


@implementation BillListModel

@end

@implementation ContractDetailModel

@end

@implementation BillDetailModel

@end

@implementation StateListModel

@end

@implementation ShortRentBaseModel
@end

@implementation ShortBillingDetailsModel

@end

@implementation RescindPreModel

@end

@implementation UserCredentialModel @end
@implementation ZMCertInfoModel @end
@implementation UserExInfoModel @end
@implementation UserSaveAuthImage @end
@implementation WithdrawInfoModel @end
@implementation WithdrawBalanceModel @end
@implementation ChargeBlanceModel @end
@implementation RechargeListItemModel @end
@implementation TdTradeRecordModel @end
@implementation SportCardModel @end

@implementation OrderListModel

@end

@implementation ItemListModel

@end

@implementation LifeSportBaseModel

@end

@implementation LifeDetailModel


@end
@implementation SportDetailModel


@end

@implementation TimeSliceModel @end
@implementation HomeServiceCheckModel @end
@implementation ApartServiceCheckModel @end
@implementation LLpayModel @end


/*
 * Search Center Models
 * This is block if used for search center
 */

@implementation SearchApartModel @end
@implementation SearchFloorModel @end
@implementation SearchPriceModel @end
@implementation SearchStyleModel @end
@implementation SearchTowardModel @end
@implementation SearchFilterModel @end

/*
 * Search Center Models
 * End
 */

@implementation RoomInfoModel @end

@implementation LiquidateModel @end

@implementation HomeOrderDisburseModel @end
