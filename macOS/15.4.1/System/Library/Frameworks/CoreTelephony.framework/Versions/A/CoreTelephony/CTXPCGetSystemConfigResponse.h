@class CTLazuliSystemConfiguration;

@interface CTXPCGetSystemConfigResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliSystemConfiguration *config;

+ (id)allowedClassesForArguments;

- (id)initWithSystemConfiguration:(id)a0;

@end
