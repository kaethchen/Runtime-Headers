@class PDFAccessibilityNodePagePrivate;

@interface PDFAccessibilityNodePage : PDFAccessibilityNode {
    PDFAccessibilityNodePagePrivate *_private3;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)page;
- (unsigned long long)pageNumber;
- (id)_document;
- (id)resultNodeForSearchString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchOption:(unsigned long long)a2 resultRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (void)scrollToVisible;
- (unsigned long long)_documentIndex;
- (id)_documentView;
- (id)_pageView;
- (void)annotationAdded:(id)a0;
- (void)annotationRemoved:(id)a0;
- (id)initWithParent:(id)a0 pageNumber:(unsigned long long)a1;
- (id)pageContentRootNode;
- (void)resetPageContentRootNode;

@end
