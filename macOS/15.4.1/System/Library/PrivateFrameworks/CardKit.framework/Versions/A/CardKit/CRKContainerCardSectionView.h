@class NSView, NSString;
@protocol CRKComposableView;

@interface CRKContainerCardSectionView : NSView <CRKCardSectionView> {
    NSView *_userInputEventInterceptView;
}

@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL interceptsTouches;
@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) NSView<CRKComposableView> *composedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFitsCardSection:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)removeFromComposedSuperview;

@end
