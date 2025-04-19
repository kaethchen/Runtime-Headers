@interface PDFAccessibilityNodeTableCell : PDFAccessibilityNode {
    struct _NSRange { unsigned long long location; unsigned long long length; } _columnIndexRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rowIndexRange;
}

@property (readonly, nonatomic) BOOL isHeader;

- (id)description;
- (id)accessibilityColumnHeaderUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnIndexRange;
- (id)accessibilityRole;
- (id)accessibilityRowHeaderUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowIndexRange;
- (id)_potentialTextContent;
- (id)_textNodeFromNode:(id)a0;
- (id)initWithParent:(id)a0 columnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (BOOL)isValidAccessibilityElement;

@end
