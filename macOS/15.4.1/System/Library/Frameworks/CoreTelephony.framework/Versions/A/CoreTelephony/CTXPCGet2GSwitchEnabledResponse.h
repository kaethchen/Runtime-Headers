@interface CTXPCGet2GSwitchEnabledResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL enabled;

+ (id)allowedClassesForArguments;

- (id)initWithIsEnabled:(BOOL)a0;

@end
