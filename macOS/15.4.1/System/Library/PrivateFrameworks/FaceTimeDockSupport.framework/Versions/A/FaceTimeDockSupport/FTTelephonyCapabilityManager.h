@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)supportsTelephonyCalls;
- (BOOL)isRelayCallingEnabled;
- (BOOL)isThumperCallingEnabled;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)hasTelephonyCapability;
- (BOOL)isTelephonyEnabled;

@end
