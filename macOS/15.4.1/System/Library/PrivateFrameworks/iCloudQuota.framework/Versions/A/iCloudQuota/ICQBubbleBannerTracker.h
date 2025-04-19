@interface ICQBubbleBannerTracker : NSObject {
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ kBubbleBannerDismissedKey;
    void /* unknown type, empty encoding */ kBubbleBannerDisplayedKey;
    void /* unknown type, empty encoding */ kBubbleBannerCAEventKey;
    void /* unknown type, empty encoding */ kFullReason;
    void /* unknown type, empty encoding */ kAlmostFullReason;
}

@property (class, nonatomic, readonly) ICQBubbleBannerTracker *shared;

- (id)init;
- (void).cxx_destruct;
- (id)account:(id)a0 lastUpdated:(id)a1 decayUntil:(double)a2;
- (void)trackLastDismissed:(id)a0 date:(id)a1 reason:(id)a2;
- (BOOL)account:(id)a0 shouldDisplay:(id)a1 forReason:(id)a2 dismissedInSession:(BOOL)a3 supressUntil:(double)a4;
- (void)trackLastDisplayedAtTheTop:(id)a0 date:(id)a1 reason:(id)a2;

@end
