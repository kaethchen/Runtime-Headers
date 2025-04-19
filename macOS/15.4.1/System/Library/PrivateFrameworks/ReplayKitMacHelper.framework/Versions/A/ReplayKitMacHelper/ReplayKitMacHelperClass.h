@class RPBroadcastActivityHostRemoteNSViewController, RPRemoteViewContainerWindow, NSString, NSExtension, RPRemoteWindowController, RPVideoEditorHostRemoteNSViewController, NSWindow, RPMacUtility;
@protocol ReplayKitMacHelperDelegate;

@interface ReplayKitMacHelperClass : NSObject <RPVideoEditorHostRemoteNSViewControllerDelegate, RPBroadcastActivityHostRemoteNSViewControllerDelegate, RPMacUtilityDelegate, ReplayKitMacHelper> {
    RPMacUtility *_rpMacUtility;
}

@property (weak, nonatomic) id<ReplayKitMacHelperDelegate> delegate;
@property (weak, nonatomic) NSWindow *sourceWindow;
@property (retain, nonatomic) NSWindow *modalSheet;
@property (retain, nonatomic) RPVideoEditorHostRemoteNSViewController *videoEditorHostViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic) double scaleFactor;
@property (retain, nonatomic) RPBroadcastActivityHostRemoteNSViewController *broadcastActivityHostViewController;
@property (retain, nonatomic) RPRemoteWindowController *controller;
@property (retain, nonatomic) RPRemoteViewContainerWindow *remoteWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dismissSheet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRectCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (void)macApplicationDidBecomeActive;
- (void)macApplicationDidResignActive;
- (void)presentBroadcastActivitySheet;
- (void)registerForApplicationStateChangesWithSourceUIWindow:(id)a0;
- (void)removeSystemStatusItem;
- (void)setupSystemStatusItem;
- (void)unregisterForApplicationStateChanges;
- (void)userDidStopRecordingFromStatusBar;
- (void)userDidStopRecordingFromWindowClose;
- (void)viewControlerDidFinish;
- (void)disableResizingWithSourceUIWindow:(id)a0;
- (void)enableResizingWithSourceUIWindow:(id)a0;
- (id)getNSWindowFromUIWindow:(id)a0;
- (void)presentBroadcastPickerAsContextMenu:(id)a0 sourceWindowSize:(struct CGSize { double x0; double x1; })a1 sourceViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hostInfo:(id)a3 completion:(id /* block */)a4;
- (void)presentVideoEditorSheetOverUIWindow:(id)a0 withVideoURL:(id)a1 handler:(id /* block */)a2;
- (long long)windowIndexWithSourceUIWindow:(id)a0;

@end
