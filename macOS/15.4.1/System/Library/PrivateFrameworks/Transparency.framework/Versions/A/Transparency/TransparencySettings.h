@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)devicePlatform;
+ (id)automatedDeviceGroup;
+ (id)deviceUserAgent;
+ (BOOL)enableSelfValidationXPCActivity;
+ (double)backgroundFollowupDelayPeriod;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (double)backgroundNetworkTimeout;
+ (id)cfPrefsJson;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (double)defaultSelfFollowupTicketLifetime;
+ (double)dismissFailureAfterSeenPeriod;
+ (double)failureIgnorePeriod;
+ (BOOL)getBool:(id)a0;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)a0;
+ (BOOL)isAccountsInQA;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (double)queryCacheHardTimeout;
+ (double)queryJustMadeTimeout;
+ (id)transparencyVersionStr;
+ (double)uiBlockingNetworkTimeout;

- (id)devicePlatform;
- (id)automatedDeviceGroup;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (double)defaultNetworkTimeout;
- (BOOL)getBool:(id)a0;
- (unsigned long long)getEnvironment;
- (id)getOverride:(id)a0;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;
- (id)transparencyVersionStr;
- (double)uiBlockingNetworkTimeout;

@end
