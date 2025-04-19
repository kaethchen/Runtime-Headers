@interface SDMDMConfigurator : NSObject

+ (void)resetMDMConfigurationWithError:(id *)a0;
+ (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 error:(id *)a3;
+ (id)loadMDMConfigurationWithError:(id *)a0;
+ (void)setupAssistant_enrollInProgramWithMDMToken:(id)a0 completion:(id /* block */)a1;

@end
