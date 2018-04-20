//
//  MessageModel.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "HTObject.h"

@interface MessageModel : HTObject

//初始化
+ (instancetype)shareInstance;

@end

@interface BannerListModel : MessageModel

@property (nonatomic,copy) NSString *coverUrl;//轮播图片URL
@property (nonatomic,copy) NSString *linkUrl;//活动h5页面URL
@property (nonatomic,copy) NSString *bannerType;
@property (nonatomic,copy) NSString *clientType;
@property (nonatomic,copy) NSString *content;
@property (nonatomic,copy) NSString *id;
@property (nonatomic,copy) NSString *linkType;
@property (nonatomic,copy) NSString *shareIcon;
@property (nonatomic,copy) NSString *shareTitle; //
@property (nonatomic,copy) NSString *state;//状态
@property (nonatomic,copy) NSString *title;//

@end

/**
 风格明细（指定风格）
 */
@interface HouseDetailModel : MessageModel

@property (strong, nonatomic)NSMutableArray *facilityList;
@property (strong, nonatomic)NSMutableArray *picList;
@property (nonatomic , copy) NSString *styleId;
@property (nonatomic , copy) NSString *title;
@property (nonatomic , copy) NSString *note;
@property (nonatomic , copy) NSString *feature;
@property (nonatomic , copy) NSString *coverUrl;
@property (nonatomic , copy) NSString *minPrice;
@property (nonatomic , copy) NSString *minArea;
@property (nonatomic , copy) NSString *dayPrice;
@property (nonatomic , copy) NSString *mobile;


@end

@interface RoomDesModel : MessageModel

@property (nonatomic , copy) NSString *coverUrl;
@property (nonatomic , copy) NSString *styleTitle;
@property (nonatomic , copy) NSString *roomArea;
@property (nonatomic , copy) NSString *toward;
@property (nonatomic , copy) NSString *sellPrice;
@property (nonatomic , copy) NSString *doorNo;
@property (nonatomic , assign) NSInteger state;

@end


@interface RoomDetailsModel : RoomDesModel

@property (strong, nonatomic)NSMutableArray *facilityList;
@property (strong, nonatomic)NSMutableArray *picList;
@property (nonatomic , copy) NSString *roomId;
@property (nonatomic , copy) NSString *apartId;
@property (nonatomic , assign) NSInteger floorNum;
@property (nonatomic , copy) NSString *liveState;
@property (nonatomic , copy) NSString *buildNo;
@property (nonatomic , copy) NSString *note;
@property (nonatomic , copy) NSString *styleId;
@property (nonatomic , copy) NSString  *mobile;
@property (nonatomic , strong)NSNumber *rentType;
@property (nonatomic , copy) NSString *startHour;
@property (nonatomic , copy) NSString *endHour;
@property (nonatomic , copy) NSString *buildingName;
@property (nonatomic , strong)NSNumber *sexType;

@end

@interface RoomListModel : RoomDesModel

@property (nonatomic , assign) NSInteger  mid;
@property (nonatomic , copy) NSString  *activityPrice;
@property (nonatomic , assign) NSInteger  apartId;
@property (nonatomic , assign) NSInteger  floorNum;
@property (nonatomic , copy) NSString  *apartName;
@property (nonatomic , copy) NSString   *buildNo;
@property (nonatomic , copy) NSString  *styleSubtitle;
@property (nonatomic , copy) NSString *liveState;
@property (nonatomic , copy) NSString  *constellation;
@property (nonatomic , copy) NSString  *mobile;
@property (nonatomic, assign) RentType rentType;
@property (nonatomic , copy) NSString *roomId;
//预订描述
@property (nonatomic, copy) NSString *latestBookDesc;
@property (nonatomic , strong)NSNumber *sexType;
@end



@interface PicListModel : MessageModel

@property (nonatomic,strong) NSMutableArray *picUrls;//轮播图片URL
@property (nonatomic,copy) NSString *msg;//文字

@end

@interface FacilityListModel : MessageModel

@property (nonatomic , copy) NSString *fctyName;
@property (nonatomic , copy) NSString *fctyIcon;
@property (nonatomic , assign) BOOL   isShow;

@end

@interface RentDurationModel : MessageModel

@property (nonatomic , copy) NSString *code;//租期代号
@property (nonatomic , copy) NSString *name;
@property (nonatomic , copy) NSString *month;

@end

@interface RoomPayModel : MessageModel


@property (nonatomic , copy) NSString *serviceFee;
@property (nonatomic , copy) NSString *payType;
@property (nonatomic , copy) NSString *payRent;
@property (nonatomic , copy) NSString *feeMonth;
@property (nonatomic , copy) NSString *payTypeName;
@property (nonatomic , copy) NSString *roomPayId;
@property (nonatomic , copy) NSString *payDeposit;
@property (nonatomic , copy) NSString *totalAmount;

@end


@interface PictureModel : MessageModel

@property (nonatomic , copy) NSString  *realName;
@property (nonatomic , copy) NSString  *sex;
@property (nonatomic , copy) NSString  *mobileNo;
@property (nonatomic , retain) NSNumber  *cardType;
@property (nonatomic , copy) NSString  *cardNo;
@property (nonatomic , strong)NSArray *pictureUrl;

@end

@interface UserInfoModel : MessageModel

@property (nonatomic , assign) NSInteger state;
@property (nonatomic , assign) NSInteger nameAuth;  //0未认证，1已认证2、芝麻认证失败3手动认证
@property (nonatomic , copy)   NSString *mobileNo;
@property (nonatomic , copy)   NSString *picUrl;
@property (nonatomic , copy)   NSString *realName;
@property (nonatomic , assign) NSInteger sex;
@property (nonatomic , copy)   NSString  *cardNo;
@property (nonatomic , assign) NSInteger staffFlag;
@property (nonatomic , assign) NSInteger userId;
@property (nonatomic , copy) NSString *userName;
@property (nonatomic , assign) NSInteger cardType;
@property (nonatomic , assign) NSInteger bindCard;
@property (nonatomic , assign) NSInteger constellation;
@property (nonatomic , assign) NSInteger bizNo;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic , assign) NSInteger companyFlag;
@end

@interface BillTotalModel : MessageModel
@property (nonatomic , assign) NSInteger cardNum;
@property (nonatomic , assign) NSInteger couponCount;
@property (nonatomic , assign) NSInteger messageCount;
@property (nonatomic , copy)   NSString* mobile;
@property (nonatomic , assign) NSInteger tdBalance;
@property (nonatomic , copy)   NSString* useBalance;
@property (nonatomic , assign) NSInteger unpaidBillCount;
@property (nonatomic , assign) NSInteger unpaidContractCount;
@property (nonatomic , assign) NSInteger unpaidHomeServiceCount;
@property (nonatomic , assign) NSInteger unpaidSportServiceCount;

@end

@interface MessageTypeModel : MessageModel
@property (nonatomic , assign) NSInteger count;
@property (nonatomic , copy)   NSString* coverUrl;
@property (nonatomic , copy)   NSString* note;
@property (nonatomic , copy)   NSString* pubDate;
@property (nonatomic , assign) NSInteger type;
@property (nonatomic , copy)   NSString* typeMsg;
@end

@interface SystemMessageModel : MessageModel
@property (nonatomic , assign) NSInteger mid;
@property (nonatomic , assign) NSInteger isRead;
@property (nonatomic , copy)   NSString* title;
@property (nonatomic , copy)   NSString* note;
@property (nonatomic , copy)   NSString* pubDate;
@property (nonatomic , assign) NSInteger type;


@end


@interface IndustryModel : MessageModel

@property(nonatomic, copy) NSString *mid;//行业id
@property(nonatomic, copy) NSString *industryName;//名字

@end



@interface CouponModel : MessageModel

@property (nonatomic , retain)NSNumber *couponType;//优惠券类型
@property (nonatomic , copy)NSString *couponAmount;//优惠券价格
@property (nonatomic , copy)NSString *couponName;//优惠券名称
@property (nonatomic , copy)NSString *couponId;//优惠券
@property (nonatomic , copy)NSString *note;//备注描述
@property (nonatomic , copy)NSString *getDate;//开始日期
@property (nonatomic , copy)NSString *loseDate;//结束日期
@property (nonatomic , retain)NSNumber *state;//0未使用，1 已使用，2已过期

@end


@interface ContractBaseModel : MessageModel

@property (nonatomic , copy)NSString *roomArea;//房间面积
@property (nonatomic , copy)NSString *toward;//朝向
@property (nonatomic , copy)NSString *startDate;//开始日期
@property (nonatomic , copy)NSString *endDate;//结束日期
@property (nonatomic , copy)NSString *apartName;//公寓名称
@property(nonatomic,copy)NSString *contractNo;//合同编号
@property (nonatomic , copy)NSString *coverUrl;//房间图片
@property (nonatomic , copy)NSString *duePayAmount;//应付金额
@property (nonatomic , copy)NSString *doorNo;//	门牌号
@property (nonatomic , copy)NSString *floorNum;//楼层
@property (nonatomic , copy)NSString *styleTitle;//风格
@property (nonatomic , assign)double totalAmount;//合同总金额
@property (nonatomic , assign)NSString *rent;//租金
@property (nonatomic , assign)NSString *serviceFee;//服务费
@property (nonatomic , assign)NSString *earnest;//定金抵扣

@end

@interface ContractModel : ContractBaseModel

@property(strong, nonatomic)NSMutableArray *couponList;//优惠券列表
@property(strong, nonatomic)NSMutableArray *dayRents;//房租明细
@property (nonatomic , copy)NSString *deposit;//押金
@property (nonatomic , copy)NSString *mobileNo;//手机号
@property (nonatomic , copy)NSString *monthCode;//租期
@property (nonatomic , copy)NSString *payAmount;//实付金额
@property (nonatomic , strong)NSNumber *payMonth;//支付月数
@property (nonatomic , strong)NSNumber *feeMonth;//租金样式支付样式
@property (nonatomic , copy)NSString *payType;
@property (nonatomic , copy)NSString *payTypeMsg;//付款描述
@property (nonatomic , copy)NSString *realName;//入住人
@property (nonatomic , copy)NSString *linkUrl;
@property (nonatomic , strong)NSNumber *rentType;//租住类型
@property (nonatomic , copy)NSString *roomId;//房间id

@end

@interface ContractDoModel : ContractBaseModel
@property(nonatomic, copy) NSString *overDate;
@property(nonatomic,copy)NSString *address;//物业地址

@property(nonatomic,copy)NSString *roomId;
@property(nonatomic,copy)NSString *billId;//账单id
@property(nonatomic,copy)NSString *billNo;
@property(nonatomic,copy)NSString *monthNum;//期数
@property(nonatomic,strong)NSArray *payList;//付款渠道列表
@property(nonatomic,copy)NSString *payAmount;//实付金额
@property(nonatomic,copy)NSString *contractId;//合同id
//@property(nonatomic,copy)NSString *earnest;//定金
@property(nonatomic,assign)NSInteger nestState;//付定状态0否1是
@property(nonatomic,copy)NSString *linkUrl;//定金说明
@property(nonatomic,assign)NSInteger payType;
@property(nonatomic,assign)double deposit;
@end

@interface PayListModel : MessageModel

@property(nonatomic,copy)NSString *channelCode;//渠道代码
@property(nonatomic,copy)NSString *channelName;//渠道名称
@property(nonatomic,copy)NSString *iconUrl;//渠道图标
@property(nonatomic,retain)NSNumber *payId;//渠道id

@end

@interface AlipayModel : MessageModel

@property(nonatomic,copy)NSString *orderInfo;

@end

@interface WechatModel : MessageModel

@property(nonatomic,copy)NSString *appid;
@property(nonatomic,copy)NSString *noncestr;
@property(nonatomic,copy)NSString *packages;
@property(nonatomic,copy)NSString *partnerid;
@property(nonatomic,copy)NSString *prepayid;
@property(nonatomic,copy)NSString *sign;
@property(nonatomic,copy)NSString *timestamp;

@end

@interface LLpayModel : MessageModel

@property (nonatomic,assign) NSInteger cardId;
@property (nonatomic,strong) NSDictionary* llpay;
@property(nonatomic,copy)NSString *orderInfo;

@end

@interface ContactListModel : MessageModel

@property(nonatomic,copy)NSString *contractId;
@property(nonatomic,copy)NSString *contractNo;
@property(nonatomic,copy)NSString *coverUrl;
@property(nonatomic,copy)NSString *doorNo;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *payTypeName;
@property(nonatomic,copy)NSString *rentYuan;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *state;
@property(nonatomic,copy)NSString *stateName;
@property(nonatomic,copy)NSString *styleName;

@end

@interface HouseRModel : MessageModel

@property (nonatomic, copy) NSString *billId;
@property (nonatomic, copy) NSString *doorNo;
@property (nonatomic, copy) NSString *repairType;
@property (nonatomic, copy) NSString *repairItem;
@property (nonatomic, copy) NSString *repairTime;

@property (nonatomic, copy) NSString *billNumName;

@property (nonatomic, copy) NSString *billDate;
@property (nonatomic, copy) NSString *cardName;
@property (nonatomic, copy) NSString *overDate;

@property (nonatomic, copy) NSString *deposit;
@property (nonatomic, copy) NSString *dueAmountYuan;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *nowNum;
@property (nonatomic, copy) NSString *payAmountYuan;
@property (nonatomic, copy) NSString *payDate;
@property (nonatomic, assign) NSInteger payStatus;
@property (nonatomic, copy) NSString *rent;
@property (nonatomic, copy) NSString *serviceFee;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *itemTypeDesc;
@property (nonatomic, copy) NSString *unitPrice;
@property (nonatomic, copy) NSString *preNum;
@property (nonatomic, copy) NSString *billNo;
@property (nonatomic, assign) SubTypeType itemType;
@property (nonatomic, assign) NSInteger usePay;
@property (nonatomic, assign) NSInteger billNum;
@property (nonatomic, assign) NSInteger rentType;

@end

//合伙人信息
@interface ContenantModel : MessageModel

@property (nonatomic, copy) NSString *cardNo;
@property (nonatomic, copy) NSString *cardTypeDesc;
@property (nonatomic, copy) NSString *mobileNo;
@property (nonatomic, copy) NSString *realName;

@end

@interface MyServiceBaseModel : MessageModel

@property (nonatomic, copy) NSString *apartName;
@property (nonatomic, copy) NSString *applyOrderNo;
@property (nonatomic, copy) NSString *doorNo;
@property (nonatomic, copy) NSString *processName;

@end


@interface MovingListModel : MyServiceBaseModel

@property (nonatomic, copy) NSString *isShowCancel;
@property (nonatomic, copy) NSString *moveInAddr;
@property (nonatomic, copy) NSString *moveOutAddr;
@property (nonatomic, copy) NSString *movingAppointOrderId;
@property (nonatomic, copy) NSString *movingTimeStr;
@property (nonatomic, copy) NSString *contactMobile;
@property (nonatomic, copy) NSString *note;

@end

@interface CleanningListModel : MyServiceBaseModel

@property (nonatomic, copy) NSString *appointDoorTime;
@property (nonatomic, copy) NSString *isShowModify;
@property (nonatomic, copy) NSString *cleanAppointOrderId;
@property (nonatomic, copy) NSString *cleanTypeCode;
@property (nonatomic, copy) NSString *cleanTypeName;
@property (nonatomic, copy) NSString *contactMobile;

@end

@interface RepairListModel : MyServiceBaseModel

@property (nonatomic, copy) NSString *appointDoorTimeStr;
@property (nonatomic, copy) NSString *contactMobile;
@property (nonatomic, copy) NSString *isShowCancel;
@property (nonatomic, copy) NSString *reapairTypeName;
@property (nonatomic, copy) NSString *repairAppointOrderId;
@property (nonatomic, copy) NSString *repairDetail;
@property (nonatomic, copy) NSString *repairItemName;

@end


@interface WifiModel : MessageModel

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *operateName;
@property (nonatomic, copy) NSString *roomNo;
@property (nonatomic, copy) NSString *serviceMobile;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *wifiPwd;

@end


@interface AdviceModel : MessageModel

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *mobileNo;
@property (nonatomic, copy) NSString *realName;
@property (nonatomic, copy) NSString *reply;
@property (nonatomic, copy) NSString *sex;
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, assign) CGRect feedbackFrame;
@property (nonatomic, assign) CGRect showFrame;

@end

@interface ApartListModel : MessageModel

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *apartId;
@property (nonatomic, copy) NSString *apartName;
@property (nonatomic, copy) NSString *coverUrl;
@property (nonatomic, copy) NSString *minPrice;
@property (nonatomic, copy) NSString *distance;
@property (nonatomic, copy) NSString *mobile;

@end

@interface MainApartListModel : MessageModel

@property (nonatomic, assign) NSInteger apartId;
@property (nonatomic, copy)   NSString* apartName;
@property (nonatomic, copy)   NSString* subTitle;
@property (nonatomic, copy)   NSString* coverUrl;
@property (nonatomic, copy)   NSArray*  styleList;  //user StyleListModel not cover feature property

@end


@interface MainRoomListModel : MessageModel

@property (nonatomic, copy)   NSString* apartName;
@property (nonatomic, copy)   NSString* apartUrl;
@property (nonatomic, copy)   NSString* coverUrl;
@property (nonatomic, copy)   NSString* doorNo;
@property (nonatomic, assign) float     level;
@property (nonatomic, assign) NSInteger rentType;
@property (nonatomic, copy)   NSString* roomId;
@property (nonatomic, copy)   NSString* note;


@end


@interface CardListModel : MessageModel

@property (nonatomic, copy) NSString *cardName;
@property (nonatomic, copy) NSString *cardPrice;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *userCardId;
@property (nonatomic,assign)CardState cardType;
@property (nonatomic, copy) NSString *cardId;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *endTime;

@property (nonatomic, copy) NSString *cardSpecieDesc;
@property (nonatomic, copy) NSString *rule;
@property (nonatomic, strong) NSMutableArray *payList;

@end

//版本更新
@interface VersionModel : MessageModel

@property(nonatomic , copy) NSString *downloadUrl;//下载地址
@property(nonatomic , assign) NSInteger hasUpdate;//是否更新
@property(nonatomic , copy) NSString *updateInfo;//更新内容
@property(nonatomic , copy) NSString *versionNo;//最新版本
@property(nonatomic , copy) NSString *sourceFor;//渠道信息
@property(nonatomic , assign)NSInteger forceUpdate;//是否强制更新

@end

@interface ApartDetailModel : MessageModel
@property(nonatomic,copy) NSString *apartId;
@property(nonatomic,copy)NSString *address;
@property(nonatomic,copy)NSString *apartName;
@property(nonatomic,copy)NSString *coverUrl;
@property(nonatomic,copy)NSString *cityName;
@property(nonatomic,copy)NSString *minPrice;
@property(nonatomic,copy)NSString *maxMonthPrice;
@property(nonatomic,assign) double lat;
@property(nonatomic,assign) double lng;
@property(nonatomic,copy)NSString *dayPrice;
@property(nonatomic,strong)NSMutableArray *factyList;//设施列表
@property(nonatomic,copy)NSString *lifeNote;
@property(nonatomic,copy)NSString *lifeUrl;
@property(nonatomic,copy)NSString *linkUrl;
@property(nonatomic,copy)NSString *mapUrl;
@property(nonatomic,copy)NSString *mobile;
@property(nonatomic,copy)NSString *nearInfo;
@property(nonatomic,copy)NSString *note;
@property(nonatomic,strong)NSMutableArray *picList;//顶部栏位轮播图片列表
@property (nonatomic, copy) NSString *trafficInfo;
@property (nonatomic, assign) BOOL isExpanded;

@end

@interface RentListModel : MessageModel

@property (nonatomic, copy) NSString *date;	//日期
@property (nonatomic, copy) NSString *price;//价格
@property (nonatomic, copy) NSString *state;//状态0不可预订1可预订

@end


@interface StyleListModel : MessageModel

@property (nonatomic , copy) NSString *apartId;
@property (nonatomic , copy) NSString *coverUrl;
@property (nonatomic , copy) NSString *dayPrice;
@property (nonatomic , copy) NSString *feature;
@property (nonatomic , copy) NSString *minArea;
@property (nonatomic , copy) NSString *minPrice;
@property (nonatomic , copy) NSString *note;
@property (nonatomic , copy) NSString *styleId;
@property (nonatomic , copy) NSString *title;

@end


@interface BuildingListModel : MessageModel

@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *month;  //公寓是否只限女性住户；1女性；2或者空为不限 11.13

@end

@interface FloorsListModel :MessageModel

@property (nonatomic, copy)NSString *code;
@property (nonatomic, copy)NSString *name;

@end

@interface TowardsListModel : MessageModel

@property (nonatomic, copy)NSString *code;

@end

@interface RentTypeListModel : MessageModel

@property (nonatomic , copy) NSString *name;
@property (nonatomic , copy) NSString *code;
@property (nonatomic , copy) NSString *month;

@end

@interface PriceRangeModel : MessageModel

@property (nonatomic , copy) NSString *maxLongRentPrice;
@property (nonatomic , copy) NSString *maxShortRentPrice;
@property (nonatomic , copy) NSString *minLongRentPrice;
@property (nonatomic , copy) NSString *minShortRentPrice;

@end


@interface RoomPrepareModel : MessageModel

@property(strong, nonatomic)NSMutableArray *rentDurationList;//合同租期列表
@property(nonatomic,copy)NSString *rentType;//租赁类型1长租2短租
@property(nonatomic,copy)NSString *sellPrice;//价格
@property(nonatomic,copy)NSString *apartId;
@property(nonatomic,copy)NSString *styleId;
@property(nonatomic,copy)NSString *roomId;
@property(nonatomic,copy)NSString *apartName;//公寓名称
@property(nonatomic,copy)NSString *styleTitle;//风格名称
@property(nonatomic,copy)NSString *doorNo;//房间号
@property(nonatomic,copy)NSString *buildId;//楼栋id
@property(nonatomic,copy)NSString *buildingName;//楼栋
@property(nonatomic,copy)NSString *floorNum;//楼层
@property(nonatomic,copy)NSString *nowDate;
@property(nonatomic,copy)NSString *signScope;

@end

@interface CanlendarModel : MessageModel

@property(nonatomic,strong)NSMutableArray *rentList;
@property(nonatomic,strong)NSMutableArray *roomPayList;
@property(nonatomic,copy)NSString *nowDate;
@property(nonatomic,copy)NSString *sellPrice;
@property(nonatomic,copy)NSString *signScope;

@end

@interface ShortRentBaseModel : MessageModel

@property (nonatomic, copy) NSString *pid;
@property (nonatomic, copy) NSString *billId;
@property (nonatomic, copy) NSString *billNo; //订单编号
@property (nonatomic, assign) NSInteger billType;//订单类型20账单
@property (nonatomic, copy) NSString *billTypeMsg;//账单内容
@property (nonatomic, copy) NSString *contractId; //合同id
@property (nonatomic, copy) NSString *coverUrl;//图片
@property (nonatomic, copy) NSString *doorNo; //门牌号
@property (nonatomic, copy) NSString *duePayAmount; //应付金额
@property (nonatomic, copy) NSString *endDate; //结束时间
@property (nonatomic, assign) BOOL isShowFp; //0否1是
@property (nonatomic, copy) NSString *payAmountYuan; //实付金额

@property (nonatomic, copy) NSString *payStatus; //状态
@property (nonatomic, copy) NSString *payStatusMsg; //状态名称
@property (nonatomic, copy) NSString *startDate; //开始时间
@property (nonatomic, copy) NSString *styleTitle; //风格名称
@property (nonatomic, copy) NSString *overDate;
@end

@interface LongRentBaseModel : MessageModel
//合同id
@property (nonatomic, copy) NSString *contractId;
@property (nonatomic, copy) NSString *billId;
@property (nonatomic, copy) NSString *roomId;
@property (nonatomic, copy) NSString *apartId;
@property (nonatomic, copy) NSString *apartName;
//室号
@property (nonatomic, copy) NSString *doorNo;
//合同开始时间
@property (nonatomic, copy) NSString *startDate;
//合同结束时间
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *cancelDate;

@property (nonatomic, copy) NSString *nowDate;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, assign) NSInteger billType;

@end

@interface ContractListModel : LongRentBaseModel
//合同编号
@property (nonatomic, copy) NSString *contractNo;
//房间图片地址
@property (nonatomic, copy) NSString *coverUrl;
//是否显示解约按钮
@property (nonatomic, assign)BOOL isShowJy;
//是否显示续约按钮
@property (nonatomic, assign)BOOL isShowXy;
//是否开具发票
@property (nonatomic, assign)BOOL isShowFp;
//是否付定金
@property (nonatomic, assign)NSInteger nestState;
//最晚支付时间
@property (nonatomic, copy) NSString *overDate;
//付款方式名称
@property (nonatomic, copy) NSString *payTypeName;
//租金
@property (nonatomic, copy) NSString *rentYuan;
//合同状态
//0待支付10待生效；20履行中；30解约中40 已解约50已结束;60已作废；70已取消
@property (nonatomic, copy) NSString *state;
//合同状态名称
@property (nonatomic, copy) NSString *stateName;
//风格名称
@property (nonatomic, copy) NSString *styleName;



@end

@interface BillListModel : LongRentBaseModel

@property (nonatomic, copy) NSString *billDate;
@property (nonatomic, copy) NSString *billNo;
@property (nonatomic, copy) NSString *billNumName;
@property (nonatomic, copy) NSString *duePayAmount;
@property (nonatomic, assign) SubTypeType itemType;
@property (nonatomic, copy) NSString *itemTypeDesc;
@property (nonatomic, copy) NSString *overDate;
@property (nonatomic, copy) NSString *payAmountYuan;
@property (nonatomic, copy) NSString *payDate;
@property (nonatomic, assign)NSInteger payStatus;
@property (nonatomic, copy) NSString *payStatusMsg;
@property (nonatomic, assign) NSInteger billNum;

@end

@interface ContractDetailModel : MessageModel

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *apartName;
@property (nonatomic, copy) NSString *styleTitle;
@property (nonatomic, copy) NSString *doorNo;
@property (nonatomic, copy) NSString *contractNo;
@property (nonatomic, copy) NSString *contractId;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *payType;
@property (nonatomic, copy) NSString *rent;
@property (nonatomic, copy) NSString *deliverSt;
@property (nonatomic, copy) NSString *earnest;
@property (nonatomic, copy) NSString *state;
@property(nonatomic,assign) NSInteger type;
@property (nonatomic, copy) NSString *stateName;
@property(nonatomic,assign) NSInteger nestState;//付定状态0否1是
@property (nonatomic, copy) NSString *overDate;
@property (nonatomic, copy) NSString *renterName;
@property (nonatomic, copy) NSString *cancelDate;
@property (nonatomic, copy) NSString *refundTotal;
@property (nonatomic, copy) NSString *totalAmount;
@property (nonatomic, copy) NSString *nowDate;
@property (nonatomic, copy) NSString *billId;
@property (nonatomic, assign)BOOL isShowFp;//是否显示开具发票
//是否显示解约按钮
@property (nonatomic, assign)BOOL isShowJy;
//是否显示续约按钮
@property (nonatomic, assign)BOOL isShowXy;

@end


@interface BillDetailModel : MessageModel
@property (nonatomic, copy) NSString *generatedTotal;
@property (nonatomic, copy) NSString *roomId;
@property (nonatomic, copy) NSString *pid;
@property (nonatomic, copy) NSString *mobile;
@property (nonatomic, copy) NSString *refundTotal; // 应退总额
@property (nonatomic, copy) NSString *cancelDate;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *styleTitle;
@property (nonatomic, copy) NSString *billId;
@property (nonatomic, copy) NSString *billName;
@property (nonatomic, copy) NSString *apartName;
@property (nonatomic, copy) NSString *doorNo;
@property (nonatomic, copy) NSString *billNo;
@property (nonatomic, copy) NSString *billDate;
@property (nonatomic, assign) NSInteger billNum;
@property (nonatomic, assign) NSInteger billType;
@property (nonatomic, copy) NSString *billTypeMsg;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, copy) NSString *couponAmount;
@property (nonatomic, copy) NSString *duePayAmount;
@property (nonatomic, copy) NSString *disAmount;
@property (nonatomic, copy) NSString *disFeeAmount;
@property (nonatomic, copy) NSString *duePayTime;
@property (nonatomic, copy) NSString *payDate;
@property (nonatomic, copy) NSString *earnest;
@property (nonatomic, copy) NSString *discount;
@property (nonatomic, copy) NSString *payAmount;
@property (nonatomic, assign)NSInteger payStatus;
@property (nonatomic, copy) NSString *payStatusMsg;
@property (nonatomic, copy) NSString *contractId;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *overDate;
@property (nonatomic, copy) NSString *rent;
@property (nonatomic, copy) NSString *serviceFee;
@property (nonatomic, copy) NSString *totalAmount;
@property (nonatomic, copy) NSString *payType;
@property (nonatomic, assign) BOOL isShowFp;
@property (nonatomic, assign) NSInteger leaseTime;
@end

@interface StateListModel : MessageModel

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *imageName;

@end

@interface ShortBillingDetailsModel : MessageModel

@property (nonatomic, copy) NSString *comissionFee; //手续费
@property (nonatomic, strong) NSArray *compensations; //赔偿列表
@property (nonatomic, strong) NSArray *consumptions; //消费物品列表
@property (nonatomic, copy) NSString *couponAmount;  //优惠金额
@property (nonatomic, copy) NSString *defaultFee; //违约费
@property (nonatomic, copy) NSString *generateRent; //已消费租金
@property (nonatomic, copy) NSString *paidDeposit; //已付押金
@property (nonatomic, copy) NSString *paidRent; //已付租金
@property (nonatomic, copy) NSString *paidServiceFee; //已付服务费
@property (nonatomic, copy) NSString *refundTotal; // 应退总额
@property (nonatomic, copy) NSString *generateDeposit;
@property (nonatomic, copy) NSString *generateServiceFee;
@property (nonatomic, copy) NSString *generateTotal;
@property (nonatomic, copy) NSString *otherTotal;
@property (nonatomic, copy) NSString *paidTotal;


@property (nonatomic, copy) NSString *coldWaterFee;//冷水费
@property (nonatomic, copy) NSString *hotWaterFee;//热水费
@property (nonatomic, copy) NSString *eleFee;//电费
@end


@interface RescindPreModel : MessageModel

@property (nonatomic, copy) NSString *disAmount;  //租金优惠
@property (nonatomic, copy) NSString *disFeeAmount;  //服务费优惠
@property (nonatomic, copy) NSString *comissionFee;
@property (nonatomic, copy) NSString *defaultFee;
@property (nonatomic, copy) NSString *generateDeposit;
@property (nonatomic, copy) NSString *generateRent;
@property (nonatomic, copy) NSString *generateServiceFee;
@property (nonatomic, copy) NSString *generateTotal;
@property (nonatomic, copy) NSString *otherTotal;
@property (nonatomic, copy) NSString *paidDeposit;
@property (nonatomic, copy) NSString *paidRent;
@property (nonatomic, copy) NSString *paidServiceFee;
@property (nonatomic, copy) NSString *paidTotal;
@property (nonatomic, copy) NSString *refundDeposit;
@property (nonatomic, copy) NSString *refundRent;
@property (nonatomic, copy) NSString *refundServiceFee;
@property (nonatomic, copy) NSString *refundTotal;

@property (nonatomic, copy) NSString *unpaidBillAmount;
@property (nonatomic, copy) NSString *coldWaterFee;
@property (nonatomic, copy) NSString *hotWaterFee;
@property (nonatomic, copy) NSString *eleFee;
@property (nonatomic, copy) NSString *compensation;

@end

@interface  UserExInfoModel : MessageModel

@property (nonatomic, copy) NSString    *compAddr;
@property (nonatomic, copy) NSString    *compName;
@property (nonatomic, strong) NSNumber  *educate;
@property (nonatomic, assign) NSInteger indusId;
@property (nonatomic, copy) NSString    *industryName;
@property (nonatomic, copy) NSString    *profession;
@property (nonatomic, copy) NSString    *school;
@property (nonatomic, copy) NSString    *graduYear;
@property (nonatomic, copy) NSString    *startYear;
@property (nonatomic, copy) NSString    *emergPhone;
@property (nonatomic, copy) NSString    *emergName;
@property (nonatomic, copy) NSString    *emergRelation;
@property (nonatomic, assign) NSInteger userId;
@property (nonatomic, assign) NSInteger userType;

@end

@interface UserCredentialModel : MessageModel
@property (nonatomic, copy) NSString *cardNo;
@property (nonatomic, assign) NSInteger cardType; //10，身份证：20，港澳通行证：30，护照，40台胞证
@property (nonatomic, copy) NSArray *pictureUrl;
@property (nonatomic, copy) NSString *realName;
@property (nonatomic, copy) NSString *sex;
@property (nonatomic, strong) UserExInfoModel *info;
@end

@interface ZMCertInfoModel : MessageModel
@property (nonatomic, copy) NSString *bizNo;
@property (nonatomic, copy) NSString *merchantId;
@end

@interface UserSaveAuthImage : MessageModel
@property (nonatomic, assign) NSInteger cardType;
@property (nonatomic, assign) NSInteger picId;
@property (nonatomic, copy) NSString    *picUrl;
@property (nonatomic, copy) NSString    *thumbPicUrl;
@property (nonatomic, assign) NSInteger userId;
@end

@interface WithdrawInfoModel : MessageModel
@property (nonatomic, copy) NSString    *money;
@property (nonatomic, copy) NSString    *payDate;
@property (nonatomic, assign) NSInteger payType;
@property (nonatomic, copy) NSString    *payTypeMsg;
@property (nonatomic, assign) NSInteger state;
@property (nonatomic, copy) NSString    *stateMsg;

@end

@interface WithdrawBalanceModel : MessageModel
@property (nonatomic, copy) NSString    *balance;
@property (nonatomic, copy) NSString    *tdBalance;
@property (nonatomic, strong) NSArray   *payList;
@end

@interface ChargeBlanceModel : MessageModel
@property (nonatomic,assign) float balance;
@property (nonatomic,copy) NSString *coverUrl;
@property (nonatomic,assign) NSInteger type;
@property (nonatomic,copy) NSString* typeMsg;
@end


@interface RechargeListItemModel : MessageModel

@property (nonatomic,assign) NSInteger billId;
@property (nonatomic,assign) NSInteger itemType;
@property (nonatomic,copy) NSString* itemTypeMsg;
@property (nonatomic,copy) NSString* payAmountYuan;
@property (nonatomic,copy) NSString* payDate;
@property (nonatomic,assign) NSInteger payStatus;
@property (nonatomic,copy) NSString* payStatusMsg;

@end


@interface TdTradeRecordModel : MessageModel

@property (nonatomic,copy) NSString* money;
@property (nonatomic,copy) NSString* payDate;
@property (nonatomic,copy) NSString* title;

@end

@interface SportCardModel : MessageModel

@property (nonatomic,strong) NSString* apartName;
@property (nonatomic,assign) NSInteger chargeType; //类型20:月卡；30：季卡；40：半年卡；50：年卡	number
@property (nonatomic,strong) NSString* commName;
@property (nonatomic,assign) NSInteger itemId;
@property (nonatomic,assign) NSInteger commodityId;
@property (nonatomic,strong) NSString* note;
@property (nonatomic,strong) NSString* price;
@property (nonatomic,assign) NSString* type; //6：游泳 20:为综合卡
@property (nonatomic,assign) NSArray*  typeList;

@end

@interface OrderListModel : MessageModel

@property (nonatomic, copy) NSString *coverUrl;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *orderId;
@property (nonatomic, copy) NSString *orderNo;
@property (nonatomic, copy) NSString *serviceTime; 
@property (nonatomic, copy) NSString *timeSlices;
@property (nonatomic, assign) NSInteger state;
@property (nonatomic, copy) NSString *stateMsg;
@property (nonatomic, copy) NSString *telephone;
@property (nonatomic, copy) NSString *totalPrice;
@property (nonatomic, copy) NSString *overDate;
@property (nonatomic, copy) NSString *homeId;
@property (nonatomic, copy) NSString *nowDate;
@property (nonatomic, copy) NSString *signScope;
@property (nonatomic,assign) NSInteger orderType;
@property (nonatomic,assign) NSInteger type;
@property (nonatomic,copy) NSString* apartName;
@property (nonatomic,copy) NSString* note;
@property (nonatomic, copy) NSString *duePayAmount;
@property (nonatomic, copy) NSString *payAmount;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSArray  *items;
@end

@interface CouponExchangeModel:MessageModel
@property (nonatomic, copy) NSString *bagName;
@property (nonatomic, assign) NSInteger bagType;
@property (nonatomic, copy) NSArray  *couponList;
@end

@interface CouponListModel : MessageModel
@property (nonatomic, copy) NSString *couponName;
@property (nonatomic,assign) NSInteger couponType;
@property (nonatomic,assign) NSInteger productType;
@property (nonatomic,assign) double disAmount;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *note;
@property (nonatomic,assign) NSInteger rangeType;
@property (nonatomic, copy) NSString *ruleMsg;
@property (nonatomic,assign) NSInteger startAmount;
@property (nonatomic,assign) NSInteger state;
@property (nonatomic, copy) NSString *stateMsg;
@property (nonatomic, copy) NSString *userCouponId;

-(double) finalFee:(double) grossAmount;
-(double) discountFee:(double) Amount;
@end

@interface  ItemListModel : MessageModel

@property (nonatomic, copy) NSString *coverUrl;
@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, assign) NSInteger quantity;
@property (nonatomic, assign) NSInteger type;

@end


@interface LifeSportBaseModel : MessageModel

@property (strong, nonatomic)NSMutableArray *itemList;
@property (nonatomic , copy) NSString *apartName;
@property (nonatomic , copy) NSString *orderNo;
@property (nonatomic , copy) NSString *nowDate;
@property (nonatomic , copy) NSString *signScope;
@property (nonatomic , copy) NSString *payAmount;
@property (nonatomic , copy) NSString *duePayAmount;
@property (nonatomic , copy) NSString *chargeTypeMsg;
@property (nonatomic , assign) NSInteger chargeType;
@property (nonatomic , assign) NSInteger productType;

@end

@interface LifeDetailModel : LifeSportBaseModel

@property (nonatomic , copy) NSString *address;
@property (nonatomic , copy) NSString *contacter;
@property (nonatomic , copy) NSString *mobile;
@property (nonatomic , copy) NSString *orderId;
@property (nonatomic , copy) NSString *homeId;
@property (nonatomic , copy) NSString *overDate;
@property (nonatomic , copy) NSString *serviceTime;
@property (nonatomic , copy) NSString *timeSlices;
@property (nonatomic , assign) NSInteger state;
@property (nonatomic , copy) NSString *stateMsg;
@property (nonatomic , copy) NSString *telephone;
@property (nonatomic , assign) NSInteger orderType;
@property (nonatomic , assign) NSInteger itemType;//10为扫一扫

@property (nonatomic , copy) NSString *orderCat;//账单类型
@property (nonatomic , copy) NSString *orderName;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic , copy) NSString *orderDate;
@property (nonatomic , copy) NSString *payDate;
@property (nonatomic , copy) NSString *originId;
@property (nonatomic , copy) NSString *startDate;
@property (nonatomic , copy) NSString *endDate;
@property (nonatomic , copy) NSString *duration;
@property (nonatomic , copy) NSString *orderAmount;
@property (nonatomic , copy) NSString *disAmount;

@end

@interface SportDetailModel : LifeSportBaseModel

@property (nonatomic , copy) NSString *commodityId;
@property (nonatomic , copy) NSString *endDate;
@property (nonatomic , copy) NSString *startDate;

@end

@interface TimeSliceModel : MessageModel

@property (nonatomic,copy) NSString* price;
@property (nonatomic,copy) NSString* state;
@property (nonatomic,copy) NSString* timeRange;

@end

@interface HomeServiceCheckModel : MessageModel

@property (nonatomic, assign) NSInteger apartId;
@property (nonatomic, assign) NSInteger homeId;
@property (nonatomic, assign) NSInteger type;

@end

@interface ApartServiceCheckModel : MessageModel

@property (nonatomic, assign) NSInteger apartId;
@property (nonatomic, assign) NSInteger type;

@end


/*
 * Search Center Models
 * This is block if used for search center
 */

@interface SearchApartModel : MessageModel
@property (nonatomic,assign) NSInteger apartId;
@property (nonatomic,copy) NSString * apartName;
@end

@interface SearchFloorModel : MessageModel
@property (nonatomic,assign) NSInteger code;
@property (nonatomic,copy) NSString * name;
@end

@interface SearchPriceModel : MessageModel
@property (nonatomic,assign) double maxRentPrice;
@property (nonatomic,assign) double minRentPrice;
@end

@interface SearchStyleModel : MessageModel
@property (nonatomic,assign) NSInteger styleId;
@property (nonatomic,copy) NSString * title;
@end

@interface SearchTowardModel : MessageModel
@property (nonatomic,copy) NSString * code;
@property (nonatomic,copy) NSString * name;
@end

@interface SearchFilterModel : MessageModel
@property (nonatomic,copy) NSArray* apartList;
@property (nonatomic,copy) NSArray* floorList;
@property (nonatomic,copy) NSArray* styleList;
@property (nonatomic,copy) NSArray* towardList;
@property (nonatomic,strong) SearchPriceModel* priceDto;
@property (nonatomic,copy) NSString *nowDate;
@property (nonatomic,assign) NSInteger signScope;
@end

/*
 * Search Center Models
 * End
 */


/*
 *  Room List Item For room/saleTag API //extra property is used for other API room related information
 *  Note: As a reference of room info model( almost the same as *HTSearchRoomModel*)
 */

@interface RoomInfoModel: MessageModel
@property (nonatomic,assign) NSInteger apartId;
@property (nonatomic,copy) NSString * apartUrl;
@property (nonatomic,copy) NSString * apartName;
@property (nonatomic,copy) NSString *coverUrl;
@property (nonatomic,copy) NSString *doorNo;
@property (nonatomic,assign) NSInteger floorNum;

@property (nonatomic,assign) NSInteger rentType;
@property (nonatomic,assign) NSInteger roomArea;
@property (nonatomic,assign) NSInteger roomId;
@property (nonatomic,assign) double sellPrice;
@property (nonatomic,copy) NSString *styleTitle;
@property (nonatomic,copy) NSString *toward;

//extra property
@property (nonatomic,copy) NSString *level;
@property (nonatomic,copy) NSString *mobile;
@property (nonatomic,copy) NSString *note;
@property (nonatomic,assign) NSInteger rentState;
@property (nonatomic,copy) NSString *roomNo;
@property (nonatomic,copy) NSString *styleId;
@property (nonatomic , strong)NSNumber *sexType;
@end

/*
 * for "/home_order/liquidate"
 */
@interface LiquidateModel: MessageModel
@property (nonatomic,assign) NSInteger productType;
@property (nonatomic,copy) NSString* apartName;
@property (nonatomic,copy) NSString* balance;
@property (nonatomic,copy) NSString* cardName;
@property (nonatomic,copy) NSString* deduction;
@property (nonatomic,copy) NSString* duePayAmount;
@property (nonatomic,copy) NSString* duration;
@property (nonatomic,copy) NSString* itemName;
@property (nonatomic,copy) NSString* orderId;
@property (nonatomic,copy) NSString* payAmount;
@property (nonatomic,copy) NSString* timeRange;
@end

/*
 *  HomeOrderDisburs Model
 */
@interface HomeOrderDisburseModel: MessageModel
@property (nonatomic,copy) NSString* balance;
@property (nonatomic,copy) NSString* disAmount;
@property (nonatomic,copy) NSString* duePayAmount;
@property (nonatomic,copy) NSString* duration;
@property (nonatomic,copy) NSString* payAmount;
@property (nonatomic,copy) NSString* timeRange;
@end
