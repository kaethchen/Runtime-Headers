@interface CDPQuotaStorageRequestBuilder : NSObject

- (id)_buildQuotaStorageRequestConfiguratorWithAppList:(unsigned long long)a0 quotaContentSpecifiesE2EE:(BOOL)a1;
- (id)buildQuotaRequestWithExtraChecks:(BOOL)a0 andContext:(id)a1;

@end
