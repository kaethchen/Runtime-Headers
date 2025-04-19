@class TKTonePickerController, NSString, NSView, NSResponder, TKPickerOutlineView, NSTimer;
@protocol TKTonePickerContentViewControllerDelegate;

@interface TKTonePickerOutlineViewController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, TKPickerOutlineViewEventHandlingDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerContentViewController> {
    TKTonePickerController *_tonePickerController;
    TKPickerOutlineView *_outlineView;
    BOOL _isUpdatingSelectionProgrammatically;
    long long _previouslySelectedRow;
    NSTimer *_selectionConsistencyRestorationTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKTonePickerContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSView *tonePickerContentView;
@property (readonly, nonatomic) NSResponder *tonePickerResponder;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_reloadData;
- (void)loadView;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (void)outlineView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewItemDidCollapse:(id)a0;
- (void)outlineViewItemDidExpand:(id)a0;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)_clearOutlineViewSelection;
- (void)_didSelectToneWithIdentifier:(id)a0;
- (void)_didUpdateExpandedStatus:(BOOL)a0 withNotification:(id)a1;
- (void)_needsSelectionConsistencyRestoration;
- (void)_performBlockAffectingSelection:(id /* block */)a0;
- (id)_pickerTableCellForTonePickerItem:(id)a0;
- (void)_restoreSelectionConsistency;
- (void)_scrollSelectedToneToVisible;
- (void)_selectOutlineViewRow:(long long)a0;
- (void)_selectOutlineViewRow:(long long)a0 allowingDelegateCallback:(BOOL)a1;
- (id)initWithTonePickerController:(id)a0;
- (void)pickerOutlineViewDidFinishHandlingMouseDrag:(id)a0;
- (BOOL)pickerOutlineViewHandleReturnKeyDown:(id)a0;
- (void)pickerOutlineViewWillBeginHandlingMouseDrag:(id)a0;
- (void)tonePickerController:(id)a0 didUpdateCheckedStatus:(BOOL)a1 ofTonePickerItem:(id)a2;
- (void)tonePickerController:(id)a0 didUpdateDetailText:(id)a1 ofTonePickerItem:(id)a2;
- (void)tonePickerController:(id)a0 requestsPresentingToneClassicsPickerForItem:(id)a1;
- (void)tonePickerController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)tonePickerControllerDidReloadTones:(id)a0;

@end
