@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUnlocked;
- (BOOL)isInternal;
- (BOOL)normalizeExpirationToMidnight;
- (double)oneDayTimeInterval;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)shouldShowUnapprovedItems;
- (id)stressBundleIdentifiers;
- (BOOL)stressMode;
- (id)supportedBundleIdentifiers;
- (id)supportedNotifyingAppIds;

@end
