@interface ICQAppLaunchLinkTracker : NSObject {
    void /* unknown type, empty encoding */ userDefaults;
}

@property (class, nonatomic, readonly) long long neverShown;
@property (class, nonatomic, readonly) ICQAppLaunchLinkTracker *shared;

- (id)init;
- (void).cxx_destruct;
- (id)allDaysSinceLastShown;
- (long long)daysSinceLastShownForBundleID:(id)a0;
- (id)lastShownDateForBundleID:(id)a0;
- (BOOL)osUpgradeSinceLastShownForBundleID:(id)a0;
- (void)setLastShownDate:(id)a0 forBundleID:(id)a1;

@end
