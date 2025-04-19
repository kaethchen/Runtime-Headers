@interface CTXPCGet2GUserPreferenceResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL enabled;

+ (id)allowedClassesForArguments;

- (id)initWithIsEnabled:(BOOL)a0;

@end
