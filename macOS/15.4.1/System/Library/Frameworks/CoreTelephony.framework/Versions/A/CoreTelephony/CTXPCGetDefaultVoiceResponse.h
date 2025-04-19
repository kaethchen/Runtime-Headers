@class CTXPCServiceSubscriptionContext;

@interface CTXPCGetDefaultVoiceResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context;

+ (id)allowedClassesForArguments;

- (id)initWithContext:(id)a0;

@end
