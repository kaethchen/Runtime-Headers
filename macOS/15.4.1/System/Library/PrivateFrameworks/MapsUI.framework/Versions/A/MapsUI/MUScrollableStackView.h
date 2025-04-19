@class NSArray, NSString, MUStackView, NSLayoutConstraint, _MUConditionalScrollClipView;

@interface MUScrollableStackView : NSScrollView <MUContentStackViewProtocol> {
    MUStackView *_stackView;
    NSLayoutConstraint *_axisConstraint;
    _MUConditionalScrollClipView *_clipView;
    struct CGSize { double width; double height; } _cachedContentSize;
}

@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (void)addArrangedSubview:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setArrangedSubviews:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)_setupViews;
- (void)_updateForHorizontalAxisIfNeeded;
- (void)_updateOrientationWithNewAxis:(long long)a0;
- (id)addArrangedCardShadowViewForView:(id)a0;
- (void)addArrangedSubview:(id)a0 withCustomSpacing:(double)a1;

@end
