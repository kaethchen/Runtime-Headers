@interface SCRSystemApplication : SCRApplication

- (BOOL)isSystemApplication;
- (void)_announceWindowExists;
- (void)announceWindowExists;
- (BOOL)applicationNeedsWindows;
- (void)elementWasDestroyed:(id)a0;
- (id)fullNameDescription;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 pid:(int)a1 name:(id)a2 bundleIdentifier:(id)a3 bundleVersion:(id)a4 url:(id)a5;
- (void)reloadApplicationFrontmostStatus;

@end
