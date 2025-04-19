@class NSTextField, NSView, NSScrollView, NSString, BrowserViewController, NSStackView, NSSet, ExtensionWrapper, NSArray, WBSFaviconRequestsController, NSButton, NSTableView;
@protocol SafariExtensionPerSiteAccessViewControllerDelegate;

@interface SafariExtensionPerSiteAccessViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {
    BrowserViewController *_browserViewController;
    ExtensionWrapper *_extension;
    NSSet *_domains;
    NSArray *_domainsToDisplay;
    WBSFaviconRequestsController *_faviconRequestsController;
    BOOL _includeDenyButton;
}

@property (weak) NSTextField *titleTextField;
@property (weak) NSTextField *descriptionTextField;
@property (weak) NSButton *allowAlwaysButton;
@property (weak) NSButton *allowForOneDayButton;
@property (weak) NSButton *allowOnAllWebsitesButton;
@property (weak) NSButton *denyButton;
@property (weak) NSView *dividerAboveDomains;
@property (weak) NSStackView *domainsDisclosureButtonStackView;
@property (weak) NSScrollView *domainsScrollView;
@property (weak) NSTableView *domainsTableView;
@property (weak) NSView *dividerBelowDomains;
@property (weak, nonatomic) id<SafariExtensionPerSiteAccessViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)_didSelectAccess:(long long)a0;
- (void)allowAlwaysClicked:(id)a0;
- (void)allowOnAllWebsitesClicked:(id)a0;
- (void)allowOneDayClicked:(id)a0;
- (void)denyButtonClicked:(id)a0;
- (id)initWithExtension:(id)a0 targetBrowserViewController:(id)a1 additionalURLForApproval:(id)a2;

@end
