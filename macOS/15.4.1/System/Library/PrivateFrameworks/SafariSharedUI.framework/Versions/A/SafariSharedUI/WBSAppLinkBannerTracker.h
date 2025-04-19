@interface WBSAppLinkBannerTracker : WBSBannerTracker

+ (id)sharedTracker;

- (id)categoryName;
- (long long)basis;
- (BOOL)shouldBlockForIdentifier:(id)a0 withDismissCount:(unsigned long long)a1;

@end
