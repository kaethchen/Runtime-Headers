@class PDFPage, NSMutableArray;

@interface PDFTextBoundingBoxesEffectLayerPrivate : NSObject {
    PDFPage *page;
    long long displayBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropBox;
    NSMutableArray *nodeTypeLayers;
}

- (void).cxx_destruct;

@end
