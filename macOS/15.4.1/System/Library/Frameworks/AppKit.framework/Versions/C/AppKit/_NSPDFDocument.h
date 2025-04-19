@interface _NSPDFDocument : NSObject {
    struct CGPDFDocument { } *_document;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    long long _currentPage;
}

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void)setCurrentPage:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (long long)currentPage;
- (struct CGPDFDocument { } *)documentRef;
- (long long)pageCount;

@end
