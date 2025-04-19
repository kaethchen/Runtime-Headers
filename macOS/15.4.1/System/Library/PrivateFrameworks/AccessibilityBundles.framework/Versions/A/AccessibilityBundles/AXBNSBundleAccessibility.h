@interface AXBNSBundleAccessibility : __AXBNSBundleAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (void)_initializeSafeCategory;

- (BOOL)loadAndReturnError:(id *)a0;
- (id)accessibilityBundlePath;
- (void)_loadAXBundleForBundleOnMainThread;

@end
