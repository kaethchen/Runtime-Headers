@class CTIMSRegistrationTransportInfo;

@interface CTXPCGetRegistrationIMSTransportInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTIMSRegistrationTransportInfo *info;

+ (id)allowedClassesForArguments;

- (id)initWithIMSRegistrationInfo:(id)a0;

@end
