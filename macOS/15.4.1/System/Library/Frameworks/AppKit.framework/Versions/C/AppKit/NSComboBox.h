@class NSArray;
@protocol NSComboBoxDelegate, NSComboBoxDataSource;

@interface NSComboBox : NSTextField {
    id _dataSource;
}

@property BOOL hasVerticalScroller;
@property struct CGSize { double x0; double x1; } intercellSpacing;
@property double itemHeight;
@property long long numberOfVisibleItems;
@property (getter=isButtonBordered) BOOL buttonBordered;
@property BOOL usesDataSource;
@property (readonly) long long indexOfSelectedItem;
@property (readonly) long long numberOfItems;
@property BOOL completes;
@property (weak) id<NSComboBoxDelegate> delegate;
@property id<NSComboBoxDataSource> dataSource;
@property (readonly) id objectValueOfSelectedItem;
@property (readonly, copy) NSArray *objectValues;

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeAllItems;
- (void)comboBoxCellSelectionDidChange:(id)a0;
- (void)_setWindow:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)addItemWithObjectValue:(id)a0;
- (void)addItemsWithObjectValues:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)comboBoxCell:(id)a0 completedString:(id)a1;
- (unsigned long long)comboBoxCell:(id)a0 indexOfItemWithStringValue:(id)a1;
- (id)comboBoxCell:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxCellSelectionIsChanging:(id)a0;
- (void)comboBoxCellWillDismiss:(id)a0;
- (void)comboBoxCellWillPopUp:(id)a0;
- (void)deselectItemAtIndex:(long long)a0;
- (long long)indexOfItemWithObjectValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertItemWithObjectValue:(id)a0 atIndex:(long long)a1;
- (id)itemObjectValueAtIndex:(long long)a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)noteNumberOfItemsChanged;
- (id)ns_widgetType;
- (long long)numberOfItemsInComboBoxCell:(id)a0;
- (void)reloadData;
- (void)removeItemAtIndex:(long long)a0;
- (void)removeItemWithObjectValue:(id)a0;
- (void)scrollItemAtIndexToTop:(long long)a0;
- (void)scrollItemAtIndexToVisible:(long long)a0;
- (void)selectItemAtIndex:(long long)a0;
- (void)selectItemWithObjectValue:(id)a0;

@end
