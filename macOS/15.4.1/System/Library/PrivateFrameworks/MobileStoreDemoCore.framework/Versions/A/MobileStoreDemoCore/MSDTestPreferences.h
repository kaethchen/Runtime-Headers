@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)catalogURL;
- (BOOL)allowStagedPackage;
- (BOOL)allowUnsignedPackage;
- (double)appUsagePollingInterval;
- (BOOL)bailOnStashedStagingRestoreFailure;
- (BOOL)bypassDUForEnrollment;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (id)catalogEvaluationPredicate;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (BOOL)disableParallelProcessing;
- (BOOL)enableAIModelAutoUpdate;
- (BOOL)enableKeychainItemAccess;
- (BOOL)fakeActivationDemoBit;
- (BOOL)fakeSealedSystemForEACS;
- (long long)findMyHubRetryDelay;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)iOSHubEnrollment;
- (id)mockAccountSettingsFile;
- (BOOL)mockForBetterTogetherDemo;
- (id)mockOSUpdateRequestFile;
- (id)mockPeerProtocolVersion;
- (BOOL)pauseContentUpdateOnError;
- (unsigned int)rebootDelayForStaging;
- (id)receiptStoreDatabaseFilePath;
- (id)receiptStoreModelPath;
- (id)screenSaverIdleDelay;
- (id)screenSaverStartIdleDelay;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;
- (id)userLogoutIdleTime;

@end
