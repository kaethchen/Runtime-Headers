@class NSString;

@interface GameCenterUI.BaseCollectionReusableView : GameCenterUI.BaseView <NSCollectionViewElement>

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *elementKind;

- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;

@end
