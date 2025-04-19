@class NSString;

@interface SearchUICollectionViewSupplementaryScrollButton : NSButton <NSCollectionViewElement>

@property long long section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)tlk_updateForAppearance:(id)a0;

@end
