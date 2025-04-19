@class TabDialogInstaller, NSView, BrowserViewController, NSString, WBSPair;

@interface BrowserContainerViewController : NSViewController <TabDialogInstallationTarget> {
    NSView *_firstResponderViewBeforeDimmingViewPresentation;
    WBSPair *_currentURLToUsageState;
}

@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (readonly, nonatomic) TabDialogInstaller *tabDialogInstaller;
@property (readonly, nonatomic) NSView *tabDialogHostingView;
@property (readonly, nonatomic) BOOL isShowingTabDialog;
@property (readonly, nonatomic) BOOL didFireCloseEvent;
@property (readonly, nonatomic) BOOL isWindowClosing;
@property (readonly, nonatomic) BOOL isBrowserViewVisible;
@property (readonly, nonatomic) BOOL isWindowMainWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_isShowingPagePreview;
- (void)didFinishShowingDialog;
- (void)installTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 completionHandler:(id /* block */)a3;
- (void)resetTabDialogInstaller;
- (void)transplantTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2;
- (void)uninstallTabDialogViewAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateUsageTrackingInformation;
- (void)updateUsageTrackingInformationAfterShowingDigitalHealthOverlay;
- (void)willShowDialog;

@end
