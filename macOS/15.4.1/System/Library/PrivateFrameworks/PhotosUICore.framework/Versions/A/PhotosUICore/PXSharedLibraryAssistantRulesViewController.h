@class NSTextField, NSString, NSArray, NSTableView, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantRulesViewController : PXAssistantTemplateViewController <PHPickerViewControllerDelegate, NSTableViewDataSource, NSTableViewDelegate, PXAssistantViewController> {
    NSTableView *_tableView;
    NSArray *_listViewItems;
    NSTextField *_footerLabel;
}

@property (readonly, nonatomic) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)_continueWithPolicy:(long long)a0;
- (id)initWithViewModel:(id)a0;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_continueWithPhotosPicker;
- (id)_customCellForListViewItem:(id)a0 tableView:(id)a1;
- (void)_handlePickerResults:(id)a0;
- (void)_updateButtonItems;
- (void)_updateFooterLabel;
- (void)continueAndSkipMovingItems;
- (void)continueWithSelectedRuleType;
- (void)firstButtonAction:(id)a0;
- (void)thirdButtonAction:(id)a0;

@end
