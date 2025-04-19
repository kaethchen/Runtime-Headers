@class CTRegistrationDisplayStatus;

@interface CTXPCGetRegistrationDisplayStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTRegistrationDisplayStatus *status;

+ (id)allowedClassesForArguments;

- (id)initWithStatus:(id)a0;

@end
