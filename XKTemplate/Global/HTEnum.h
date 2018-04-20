//
//  HTEnum.h
//  Hongtang
//
//  Created by 徐凯 on 2017/6/6.
//  Copyright © 2017年 HongTang. All rights reserved.
//


typedef NS_ENUM(NSInteger,ErrorCode){
    ErrorCodeException = -1,         //服务器异常
    ErrorCodeNoSessionId = 920,       //缺少sessionId参数
    ErrorCodeFailure = 921,           //请求失败
    ErrorCodeNoAuth = 11000,          //未登录错误
};

typedef NS_ENUM(NSInteger, HTHongtangFlatsType) {
    HTHongtangFlatsTypeBanner = 1,
    HTHongtangFlatsTypeApart,
    HTHongtangFlatsTypeActivity,
    HTHongtangFlatsTypeRoom
};

/**
 10房租类20生活类30卡券   不能变
 */
typedef NS_ENUM(NSInteger,BillType){
    
    ContactBillType = 0,         //正常流程未选择哪种支付状态
    ContactTotalBillType = 1,    //正常流程全额合同
    ContactEarnestBillType = 2,  //正常流程只付了定金合同
    HouseRentBillType = 10,      //未知的房租订单
    HouseRentNoneBillType = 11,  //未全额同时未付定金房租订单
    HouseRentPartBillType = 12,  //付定金的房租订单
    HouseRentLaterBillType = 13, //2-n期的房租账单
    
};

typedef NS_ENUM(NSInteger,  SubTypeType){
    MaintenanceSubTypeType = 4, //维修
    ElectricSubTypeType = 5,    //电费
    WaterSubTypeType = 6,       //水费
};
typedef NS_ENUM(NSInteger,CouponState){
    UnuseCouponState = 0, //未使用
    HasUseCouponState = 1, //已使用
    StaleCouponState = 2, //已过期
};
typedef NS_ENUM(NSInteger,CardState){
    MonthCardState = 0, //月卡
    QuarterCardState = 1, //季卡
    YearCardState = 2, //年卡
};
typedef NS_ENUM(NSInteger,DetailCardState){
    DetailCardStateBuy = 0, //购买红糖卡详情
    DetailCardStateMy = 1, //我的红糖卡详情
};

typedef NS_ENUM(NSInteger,RentType){
    RentTypeMonth = 1, //月租
    RentTypeDay = 2, //日租
};

typedef NS_ENUM(NSInteger,ContractType){
    ContractTypeSign        = 0, //签约
    ContractTypeExtension   = 1, //续约
    ContractTypeEarnest     = 2, //定金
    ContractTypeChangeRoom  = 3, //换房
    ContractTypeChangePrice = 4, //改价
};


typedef NS_ENUM(NSInteger,ContractState){
    ContractStateTotal = -1,//全部
    ContractStateWait = 0, //待支付
    ContractStateEffect = 10, //已付定
    ContractStatePerformance = 20, //履约中
    ContractStateRescissioning = 30, //解约中
    ContractStateReplaceRooming = 32, //换房中
    ContractStateRescissionDone = 40, //已解约
    ContractStateReplaceRoomDone = 42, //已换房
    ContractStateDone = 50, //已结束
    ContractStateCancel = 70, //已取消
};

typedef NS_ENUM(NSInteger,BillDetailState){
    BillDetailStateTotal = -1,//全部
    BillDetailStateWait = 0, //待支付
    BillDetailStateFinish = 10, //已完成
    BillDetailStateClose = 30, //已关闭
};

typedef NS_ENUM(NSInteger,ShortContractState){
    ShortContractStateTotal = -1,   //全部订单
    ShortContractStateWaitPay = 0,  //待支付
    ShortContractStateWaitAt = 15,  //待入住
    ShortContractStateChecking = 20,//入住中
    ShortContractStateCheckouting = 30, //退房中
    ShortContractStateCheckout = 40,//已退房
    ShortContractStateFinish = 50,  //已完成
    ShortContractStateClancel = 70, //已取消 已关闭
};



typedef NS_ENUM(NSInteger,PaySwitchType){
    PaySwitchTypeApart      = 1, //公寓进入
    PaySwitchTypeStyle      = 2, //风格进入
    PaySwitchTypeRoom       = 3, //房间进入
    PaySwitchTypeRescission = 4, //续约进入
    PaySwitchTypeEarnest    = 5, //定金进入
};


typedef NS_ENUM(NSInteger,RecreationType){
    RecreationTypeWaitTotal = -1,    // 全部
    RecreationTypeUsing = 1,         //使用中
    RecreationTypeWaitPay = 10,      // 待支付
    RecreationTypeFinish = 30,       // 已完成
    RecreationTypeConsumed = 40,     // 已消费--详情中暂时没用
    RecreationTypeCancel = 50,       // 已取消
};


typedef NS_ENUM(NSInteger,LifeServiceType){
    LifeServiceTypeWaitTotal = -1,    // 全部
    LifeServiceTypeUsing = 1,         // 使用中
    LifeServiceTypeWaitPay = 10,      // 待支付
    LifeServiceTypeWaitAssign = 20,   // 待分配
    LifeServiceTypeWaitService = 30,  // 待服务
    LifeServiceTypeServiceing = 35,   // 服务中
    LifeServiceTypeFinish = 40,       // 已完成
    LifeServiceTypeFinishPay = 45,    // 已支付
    LifeServiceTypeCancel = 50,       // 已取消
    LifeServiceTypeClosed = 60,       // 已关闭
};

typedef NS_ENUM(NSInteger,ServiceType){
    ServiceTypeLifeService,     // 生活服务
    ServiceTypeRecreation,      // 休闲娱乐
    ServiceTypeCleaning,        // 保洁服务
    ServiceTypeRepair,          // 维修服务
    ServiceTypeWashing,         // 洗衣服务
    ServiceTypeRenting,         // 租赁服务
    ServiceTypeSwimming,        // 游泳
    ServiceTypeFitness,         // 健身
    ServiceTypeDance,           // 舞蹈瑜伽
    ServiceTypeSquashn,         // 壁球
    ServiceTypeTennis,          // 网球
    ServiceTypeBasketball,      // 篮球
    ServiceTypeBoxing,          // 拳击
    ServiceTypeBilliard,        // 台球
    ServiceTypeAVRoom,          // 影音厅
    ServiceTypeBoard,           // 桌游
    ServiceTypeTableTennis,     // 乒乓球
    ServiceTypeSports           // 总计：从游泳--乒乓球
};




typedef NS_ENUM(NSInteger, EnjoyServiceType) {
    EnjoyServiceTypeMaintain = 1,
    EnjoyServiceTypeClean,
    EnjoyServiceTypeRent
};

typedef NS_ENUM(NSInteger, EnjoyServiceProjectType) {
    EnjoyServiceProjectTypeMaintain = 1,
    EnjoyServiceProjectTypeRent = 3
};

typedef NS_ENUM(NSInteger,HTPublicServiceType) {
    HTPublicServiceTypeKitchen = 1,
    HTPublicServiceTypeWash
};

typedef NS_ENUM(NSInteger,HTServiceType) {
    HTServiceTypeRepair = 1,
    HTServiceTypeClean,
    HTServiceTypeMove
};

typedef NS_ENUM(NSInteger,HTGestureUnlockStatus) {
    HTGestureUnlockStatusNormal = 1,
    HTGestureUnlockStatusSuccess,
    HTGestureUnlockStatusFail,
    HTGestureUnlockStatusConfirm,
    HTGestureUnlockStatusDifferent,
    HTGestureUnlockStatusShort,
    HTGestureUnlockStatusFiveTimes,//错误五次以上
};

typedef NS_ENUM(NSInteger, passwordtype){
    ResetPassWordType = 1,
    UsePassWordType = 2,
};

typedef NS_ENUM(NSInteger,SendType){
    RegisterSendType = 1,//注册
    ResetPasswordSendType = 2,//找回密码
    BindingPhoneSendType = 3,//绑定手机号码3
    BankPhoneSendType = 6,//银行卡预留手机号验证6
};


typedef NS_ENUM(NSInteger, HTQualificationPushType) {
    HTQualificationPushTypeOther,
    HTQualificationPushTypeName,
    HTQualificationPushTypeRoom
};

typedef NS_ENUM(NSInteger, HTRoomState) {
    HTRoomStateMaintaining = 0, //维护中
    HTRoomStateOutstanding, //可签约
    HTRoomStateContracted,  //已签约
};

typedef NS_ENUM(NSInteger,HTHongtangTabType) {
    HTHongtangTabTypeHome = 0,
    HTHongtangTabTypeHotal,
    HTHongtangTabTypeEnjoyService,
    HTHongtangTabTypeMine,
};
