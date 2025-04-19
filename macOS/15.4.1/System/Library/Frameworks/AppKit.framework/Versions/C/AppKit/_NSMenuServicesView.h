@class NSString, NSImage, NSMenuItem;

@interface _NSMenuServicesView : NSView {
    NSString *_categoryName;
    double _minimumWidths[3];
    double _actualWidths[3];
    double _categoryNameWidth;
    NSImage *_image;
    struct { unsigned char _shouldDrawCategoryArea : 1; unsigned char _shouldDrawCategoryName : 1; unsigned char _imageLoadHasBegun : 1; unsigned char _imageIsLoaded : 1; unsigned char _inDrawRect : 1; unsigned char _isSpacer : 1; unsigned char _isEditServicesItem : 1; unsigned char _isNoServiceApplyItem : 1; unsigned char _iconIsDefaultBrowser : 1; unsigned int reserved : 23; } _flags;
}

@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) NSMenuItem *explicitMenuItem;
@property (nonatomic) BOOL shouldDrawCategoryName;
@property (nonatomic) BOOL shouldDrawCategoryArea;
@property (nonatomic) BOOL isSpacer;
@property (nonatomic) BOOL isEditServicesItem;
@property (nonatomic) BOOL isNoServicesApplyItem;
@property (nonatomic) BOOL iconIsDefaultBrowser;

+ (void)initialize;

- (void)dealloc;
- (id)title;
- (void)computeMinimumWidthsIfNecessary;
- (id)categoryAttributes;
- (id)categoryColor;
- (id)categoryHighlightColor;
- (void)computeMinimumMetrics:(struct NSMenuServicesViewMetrics { unsigned int x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } *)a0;
- (void)drawCategoryNameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlighted:(BOOL)a1 backgroundStyle:(long long)a2 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)drawImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(long long)a1 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawKeyEquivalentForItem:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 highlighted:(BOOL)a2 backgroundStyle:(long long)a3 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTitle:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 highlighted:(BOOL)a2 enabled:(BOOL)a3 backgroundStyle:(long long)a4 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flipHorizontallyIfNecessary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getKeyEquivalentCellForItem:(id)a0;
- (void)getMetrics:(struct NSMenuServicesViewMetrics { unsigned int x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } *)a0 forWidths:(const double *)a1;
- (void)getMinimumWidths:(double *)a0;
- (id)highlightedCategoryAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)loadedImage:(id)a0;
- (id)representingMenuItem;
- (double)roundUpForTextMeasurement:(double)a0;
- (void)setActualWidths:(const double *)a0;
- (void)sizeToFit;

@end
