@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)init;
- (void).cxx_destruct;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (id)initWithAppConfigurationManager:(id)a0;

@end
