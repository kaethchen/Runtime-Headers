@class ACAccount;

@interface CDPQuotaStorageRequestConfigurator : NSObject {
    ACAccount *_account;
    unsigned long long _appList;
    BOOL _specifyE2EE;
}

- (void).cxx_destruct;
- (BOOL)_isConfigurationValid;
- (id)initWithAccount:(id)a0 appList:(unsigned long long)a1 contentSpecifiesE2EE:(BOOL)a2;
- (id)quotaRequest:(id *)a0;

@end
