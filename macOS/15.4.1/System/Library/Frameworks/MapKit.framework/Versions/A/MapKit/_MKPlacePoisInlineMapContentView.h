@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
}

@property (nonatomic) BOOL visible;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasTitle;
- (double)mapViewHeight;
- (void)setLocationsNumber:(unsigned long long)a0;
- (BOOL)useImageView;

@end
