@interface FIFinderViewOpenPanelGutsController : FIFinderViewGutsController

- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)shouldEnableShareButton;
- (void)setIsSavePanel:(BOOL)a0;
- (void)configureWindowForContentChange;
- (struct TFENode { struct OpaqueNodeRef *x0; })_initialTargetNode;
- (Class)browserContainerClass;
- (void)cacheShareButton:(id)a0;
- (void)cacheTagsButton:(id)a0;
- (void)configureCustomAccessibilityDescription:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0 forSegmentedControl:(id)a1;
- (BOOL)hasUbiquityError;
- (void)iCloudModeChanged;
- (void)prepareToHide;
- (void)prepareToShow;
- (void)registerForUbiquityStatus;
- (BOOL)sidebarInitiallyVisible;
- (void)unregisterForUbiquityStatus;
- (void)updateICloudButtonImage;
- (void)updateUbiquityStatus;
- (void *)userSearchTarget;

@end
