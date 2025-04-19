@class NSArray, ABCommunicationButtonsController;

@interface ABCollectionFaceTimeRowView : ABCardCollectionRowView

@property (retain, nonatomic) NSArray *facetimeRowViewConstraints;
@property (retain, nonatomic) ABCommunicationButtonsController *buttonsController;

- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (void)generateConstraints;
- (BOOL)actionGlyphButtonsAlwaysVisible;
- (long long)actionGlyphButtonsGravity;

@end
