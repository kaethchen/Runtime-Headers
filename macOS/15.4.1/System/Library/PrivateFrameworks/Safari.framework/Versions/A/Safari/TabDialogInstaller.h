@class BrowserViewController, NSView, DimmingView;
@protocol TabDialogView;

@interface TabDialogInstaller : NSObject {
    DimmingView *_dimmingView;
    NSView<TabDialogView> *_tabDialogView;
}

@property (readonly, weak, nonatomic) BrowserViewController *browserViewController;
@property (readonly, weak, nonatomic) NSView *hostingView;
@property (readonly, nonatomic) NSView<TabDialogView> *tabDialogView;
@property (readonly, nonatomic) DimmingView *dimmingView;

- (void).cxx_destruct;
- (void)_deactivateWebViewAndInstallDimmingView:(id)a0;
- (id)_layoutConstraintsForTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 verticalOffset:(double)a3;
- (id)initWithBrowserViewController:(id)a0 hostingView:(id)a1;
- (void)installTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 verticalOffset:(double)a3 preInstallationCallback:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)uninstallTabDialogViewAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
