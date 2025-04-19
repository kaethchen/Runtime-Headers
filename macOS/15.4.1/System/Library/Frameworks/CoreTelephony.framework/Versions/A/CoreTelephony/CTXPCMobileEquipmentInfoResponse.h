@class CTMobileEquipmentInfoList;

@interface CTXPCMobileEquipmentInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTMobileEquipmentInfoList *infoList;

+ (id)allowedClassesForArguments;

- (id)initWithEquipmentInfoList:(id)a0;

@end
