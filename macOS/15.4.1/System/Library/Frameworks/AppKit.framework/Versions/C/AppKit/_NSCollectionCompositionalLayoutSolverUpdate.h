@class NSArray, _NSDataSourceSnapshotter;
@protocol _NSCollectionViewUpdateTranslating;

@interface _NSCollectionCompositionalLayoutSolverUpdate : NSObject

@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) id<_NSCollectionViewUpdateTranslating> updateTranslator;
@property (readonly, nonatomic) _NSDataSourceSnapshotter *finalDataSourceSnapshot;

+ (id)solverUpdateWithUpdateItems:(id)a0 updateTranslator:(id)a1 finalDataSourceSnapshot:(id)a2;

- (void).cxx_destruct;
- (id)initWithUpdateItems:(id)a0 updateTranslator:(id)a1 finalDataSourceSnapshot:(id)a2;

@end
