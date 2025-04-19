@class NSPopUpButtonCell, NSSegmentedControl;

@interface AddRemoveView : NSView {
    NSSegmentedControl *mAddRemoveControl;
    NSPopUpButtonCell *mActionPopupCell;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL addAction;
@property (nonatomic) SEL deleteAction;
@property (nonatomic) BOOL showsActionButton;
@property (nonatomic, getter=isAddButtonEnabled) BOOL addButtonEnabled;
@property (nonatomic, getter=isDeleteButtonEnabled) BOOL deleteButtonEnabled;
@property (nonatomic, getter=isActionButtonEnabled) BOOL actionButtonEnabled;
@property (nonatomic) BOOL popupButtonShowsArrow;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setMenu:(id)a0;
- (void)setDeleteButtonToolTip:(id)a0;
- (void)_segmentAction:(id)a0;
- (void)_createButtons;
- (BOOL)setActionButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setActionButtonEnabled:(BOOL)a0;
- (void)setActionButtonKeyEquivalent:(id)a0;
- (void)setActionButtonMenu:(id)a0;
- (void)setActionButtonToolTip:(id)a0;
- (BOOL)setAddButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setAddButtonEnabled:(BOOL)a0;
- (void)setAddButtonKeyEquivalent:(id)a0;
- (void)setAddButtonToolTip:(id)a0;
- (BOOL)setDeleteButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setDeleteButtonEnabled:(BOOL)a0;
- (void)setDeleteButtonKeyEquivalent:(id)a0;

@end
