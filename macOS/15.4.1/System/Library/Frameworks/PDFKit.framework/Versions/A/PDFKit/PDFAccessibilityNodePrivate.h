@class PDFPage, NSMutableArray, NSString;
@protocol PDFAccessibilityNodeParent;

@interface PDFAccessibilityNodePrivate : NSObject {
    PDFPage *page;
    struct CGPDFTaggedNode { } *nodeRef;
    id<PDFAccessibilityNodeParent> parent;
    NSMutableArray *children;
    NSString *altText;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
}

- (void).cxx_destruct;

@end
