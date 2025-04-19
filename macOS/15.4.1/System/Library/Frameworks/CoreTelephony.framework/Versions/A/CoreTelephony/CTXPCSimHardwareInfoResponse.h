@class CTSimHardwareInfo;

@interface CTXPCSimHardwareInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSimHardwareInfo *hardwareInfo;

+ (id)allowedClassesForArguments;

- (id)initWithHardwareInfo:(id)a0;

@end
