@class NSWindow, NSString, NSArray, FI_TTableViewController, NSObject, FI_TTableViewDataSource;
@protocol TSearchCriteriaSheetDelegate;

@interface FI_TSearchCriteriaSheetController : NSWindowController <TMarkTornDown> {
    FI_TTableViewController *_tableViewController;
    FI_TTableViewDataSource *_tableViewDataSource;
    struct TNSWeakPtr<NSObject<TSearchCriteriaSheetDelegate>> { NSObject<TSearchCriteriaSheetDelegate> *fWeakObject; } _weakDelegate;
    NSWindow *_parentWindow;
    NSArray *_attributeNamesInMenu;
    BOOL _isBackupBrowserWindow;
}

@property (weak, nonatomic) NSObject<TSearchCriteriaSheetDelegate> *delegate;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;
- (void)cancelButtonPressed:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)showWindow:(id)a0;
- (void)windowDidLoad;
- (void)aboutToTearDown;
- (void)okButtonPressed:(id)a0;
- (id)initWithParentWindow:(id)a0 attributeNamesInMenu:(id)a1 isBackupBrowserWindow:(BOOL)a2;
- (void)showSheet:(void *)a0;

@end
