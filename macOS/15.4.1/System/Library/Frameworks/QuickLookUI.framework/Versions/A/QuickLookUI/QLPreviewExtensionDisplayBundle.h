@class STBlockingViewController, NSString, NSView, NSExtension, QLPreviewExtensionHostContext;
@protocol QLPreviewExtensionContextProtocol, QLPreviewExtensionViewControllerProtocol;

@interface QLPreviewExtensionDisplayBundle : QLUIServiceBaseDisplayBundle <QLRemoteViewControllerDelegate>

@property (retain) NSExtension *extension;
@property (retain) id extensionRequestId;
@property (retain) QLPreviewExtensionHostContext *extensionContext;
@property (readonly) id<QLPreviewExtensionContextProtocol> remoteExtensionContext;
@property (readonly) id<QLPreviewExtensionViewControllerProtocol> extensionServiceViewController;
@property struct CGSize { double width; double height; } extensionPreferredPreviewSize;
@property struct CGSize { double width; double height; } extensionMinimumPreviewSize;
@property (copy) NSString *extensionContentTitle;
@property (retain) NSView *containerView;
@property (retain) STBlockingViewController *blockingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newDisplayBundleViewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)copy:(id)a0;
- (void)selectAll:(id)a0;
- (id)customDisplayName;
- (id)_createCoreSpotlightExtensionPreview;
- (id)_createURLExtensionPreview;
- (BOOL)_extensionIsIosmac;
- (void)_insertRemoteView;
- (id)bundleIDForScreentime;
- (id)initWithPreview:(id)a0 owner:(id)a1;
- (int)loadWithHints:(id)a0;
- (void)modeDidChange;
- (void)presentScreenTimeLockoutWithPolicy:(long long)a0;
- (void)previewStatusDidChange;
- (id)quickLookContentView;
- (id)serviceCrashError;
- (id)sizingConstraints;

@end
