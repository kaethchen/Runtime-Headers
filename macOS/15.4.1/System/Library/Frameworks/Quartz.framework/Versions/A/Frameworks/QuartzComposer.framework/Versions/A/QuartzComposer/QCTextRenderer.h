@class NSString;

@interface QCTextRenderer : NSObject {
    NSString *_string;
    int _alignmentH;
    int _alignmentV;
    NSString *_fontName;
    double _fontSize;
    double _fontKerning;
    double _offset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    void *_framesetterRef;
    void *_frameRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)string;
- (void)setString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)fontName;
- (double)fontSize;
- (int)horizontalAlignment;
- (double)leadingOffset;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHorizontalAlignment:(int)a0;
- (void)setLeadingOffset:(double)a0;
- (void)setVerticalAlignment:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicBounds;
- (int)verticalAlignment;
- (void)_flushCache:(BOOL)a0;
- (void)_updateCache;
- (void)drawInContext:(struct CGContext { } *)a0 withColorRed:(double)a1 green:(double)a2 blue:(double)a3 alpha:(double)a4;
- (double)kerningShift;
- (void)setFontName:(id)a0 size:(double)a1;
- (void)setKerningShift:(double)a0;
- (unsigned long long)visibleLineCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleStringRange;

@end
