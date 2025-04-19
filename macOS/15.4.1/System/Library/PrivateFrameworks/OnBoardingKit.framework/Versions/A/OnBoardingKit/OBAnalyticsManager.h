@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)commit;
- (void)addEvent:(id)a0;
- (void)addEvent:(id)a0 withPayload:(id)a1;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)a0;

@end
