@class QLPreview;

@interface QLPreviewDocumentDisplayBundle : NSObject

@property (readonly, nonatomic) QLPreview *preview;

- (void).cxx_destruct;
- (long long)pageCount;
- (id)initWithPreview:(id)a0;
- (struct __CFData { } *)copyPageAsImageType:(struct __CFString { } *)a0 maximumSize:(struct CGSize { double x0; double x1; })a1 pageNumber:(long long)a2;
- (struct __CFString { } *)copyPageTextForPage:(long long)a0;
- (void)drawPage:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (BOOL)isBitmap;
- (BOOL)isPaginated;
- (struct CGSize { double x0; double x1; })pageSizeForPage:(long long)a0;

@end
