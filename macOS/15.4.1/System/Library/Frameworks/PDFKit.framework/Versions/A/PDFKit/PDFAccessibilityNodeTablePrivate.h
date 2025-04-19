@class PDFAccessibilityNode, NSArray, PDFAccessibilityNodeText;

@interface PDFAccessibilityNodeTablePrivate : NSObject {
    PDFAccessibilityNode *header;
    NSArray *rowHeaderCells;
    NSArray *columns;
    PDFAccessibilityNodeText *caption;
}

- (void).cxx_destruct;

@end
