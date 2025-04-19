@class ICTableSelectionKnob, ICTableAccessibilityElementProvider, NSScrollView, ICMTableAccessibilityTextViewProxyElement, ICMTableAccessibilityElement, ICTableAttachmentView, ICTableAttachmentViewController;

@interface ICTableAccessibilityController : NSObject

@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (readonly, nonatomic) ICTableAccessibilityElementProvider *elementProvider;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) ICTableAttachmentView *hostingTableAttachmentView;
@property (readonly, nonatomic) NSScrollView *tableScrollView;
@property (readonly, nonatomic) NSScrollView *noteScrollView;
@property (readonly, nonatomic) BOOL isTableRightToLeft;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } attachmentRangeInNote;
@property (readonly, nonatomic) ICTableSelectionKnob *startSelectionKnob;
@property (readonly, nonatomic) ICTableSelectionKnob *endSelectionKnob;
@property (retain, nonatomic) ICMTableAccessibilityElement *tableElement;
@property (retain, nonatomic) ICMTableAccessibilityTextViewProxyElement *textViewProxyElement;

- (void).cxx_destruct;
- (id)table;
- (BOOL)isEditable;
- (id)selectedCells;
- (void)addColumnBefore;
- (void)moveCurrentColumnOrRow:(BOOL)a0 toIndex:(unsigned long long)a1;
- (void)addColumnAfter;
- (void)addRowAbove;
- (void)addRowBelow;
- (id)attributedContentStringForColumnID:(id)a0 rowID:(id)a1;
- (void)beginEditingCellWithColumnID:(id)a0 rowID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCellWithColumnID:(id)a0 rowID:(id)a1;
- (id)cellElementForColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (id)cellElementsForColumnID:(id)a0;
- (id)cellElementsForRowID:(id)a0;
- (BOOL)cellIsEditingAtColumnID:(id)a0 rowID:(id)a1;
- (id)columnElementForID:(id)a0;
- (id)columnHeaderElement;
- (id)columnIDForColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndexForColumnID:(id)a0;
- (void)convertTableToText;
- (void)deleteSelectedColumns;
- (void)deleteSelectedRows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInScreenSpaceForCellWithColumnID:(id)a0 rowID:(id)a1;
- (id)initWithTableAttachmentViewController:(id)a0;
- (void)invalidateAXElementsForColumnID:(id)a0;
- (void)invalidateAXElementsForRowID:(id)a0;
- (BOOL)isHeaderCellAtColumnID:(id)a0 rowID:(id)a1;
- (void)reverseTableDirection;
- (id)rowElementForID:(id)a0;
- (id)rowHeaderElement;
- (id)rowIDForRowIndex:(unsigned long long)a0;
- (unsigned long long)rowIndexForRowID:(id)a0;
- (void)scrollColumnIDToVisible:(id)a0 rowID:(id)a1;
- (void)selectCellForColumnID:(id)a0 rowID:(id)a1;
- (void)selectCellRangeForCurrentCell;
- (void)selectColumnWithID:(id)a0;
- (void)selectCurrentColumn;
- (void)selectCurrentRow;
- (void)selectRowWithID:(id)a0;
- (id)selectedColumnIDs;
- (id)selectedRowIDs;
- (void)speakCellRangeSelection:(id)a0;
- (id)textViewForColumnID:(id)a0;
- (id)titleForColumnID:(id)a0;
- (id)titleForRowID:(id)a0;

@end
