@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)_configurationRequestWithURLString:(id)a0;
+ (id)configurationWithContext:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;

- (void).cxx_destruct;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)accountInfoFetchSetupDictionary;
- (id)_escrowProxyURL;
- (id)_configurationInfoURLRequest;
- (id)_escrowConfigurationBag;
- (id)_escrowConfigurationBagFull;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_fetchConfigurationDictionary;
- (id)_fetchEscrowConfigurationBag;
- (id)_iCloudEnvironment;
- (id)_setupConfigurationURLs;
- (id)escrowAuthInfoForCreateEscrowRecordFlow:(BOOL)a0;

@end
