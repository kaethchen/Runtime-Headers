@class _NSCollectionPreferredSizes;
@protocol _NSCollectionLayoutSectionSolver;

@interface _NSCollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject

@property (readonly, nonatomic) id<_NSCollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) _NSCollectionPreferredSizes *preferredSizes;

- (void).cxx_destruct;
- (id)initWithSolution:(id)a0 preferredSizes:(id)a1;

@end
