@class NSSet, _NSDiffableDataSourceState;
@protocol _NSIdentifierDiffer;

@interface _NSDiffableSectionBoundaryMoveDetector : NSObject {
    id<_NSIdentifierDiffer> _differ;
    _NSDiffableDataSourceState *_beforeState;
    _NSDiffableDataSourceState *_afterState;
}

@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL didShortCircuit;

- (void).cxx_destruct;
- (id)_computeMovePairsFoundation;
- (id)_computeMovePairsSTL;
- (id)initWithItemDiffer:(id)a0 beforeDataSourceState:(id)a1 afterDataSourceState:(id)a2;

@end
