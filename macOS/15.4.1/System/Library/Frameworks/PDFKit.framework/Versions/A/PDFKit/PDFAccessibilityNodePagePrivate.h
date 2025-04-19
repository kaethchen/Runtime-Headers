@class PDFAccessibilityNode;

@interface PDFAccessibilityNodePagePrivate : NSObject {
    PDFAccessibilityNode *pageContentRootNode;
    unsigned long long pageNumber;
}

- (void).cxx_destruct;

@end
