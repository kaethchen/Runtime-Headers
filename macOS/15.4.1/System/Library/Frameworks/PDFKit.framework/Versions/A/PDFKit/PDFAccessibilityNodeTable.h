@class PDFAccessibilityNodeTablePrivate;

@interface PDFAccessibilityNodeTable : PDFAccessibilityNode {
    PDFAccessibilityNodeTablePrivate *_private3;
}

- (void).cxx_destruct;
- (id)accessibilityCellForColumn:(long long)a0 row:(long long)a1;
- (long long)accessibilityColumnCount;
- (id)accessibilityColumnHeaderUIElements;
- (id)accessibilityColumns;
- (id)accessibilityHeader;
- (id)accessibilityHelp;
- (id)accessibilityRole;
- (long long)accessibilityRowCount;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityRows;
- (id)accessibilitySelectedCells;
- (id)accessibilitySelectedRows;
- (id)accessibilityVisibleCells;
- (id)accessibilityVisibleColumns;
- (id)accessibilityVisibleRows;
- (id)_allColumns;
- (id)_cells;
- (unsigned long long)_columnCount;
- (BOOL)_containsValidMarkup;
- (id)_rows;
- (void)buildAccessibilityHierarchy;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;

@end
