@class CTIMSRegistrationStatus;

@interface CTXPCGetIMSRegistrationStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTIMSRegistrationStatus *status;

+ (id)allowedClassesForArguments;

- (id)initWithIMSRegistrationStatus:(id)a0;

@end
