@protocol _FEFocusMovementPerformerDelegate;

@interface _FEFocusMovementPerformer : NSObject

@property (weak, nonatomic) id<_FEFocusMovementPerformerDelegate> delegate;

- (void).cxx_destruct;
- (id)__findFocusCandidateInEnvironment:(id)a0 container:(id)a1 forRequest:(id)a2 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 isLoadingScrollableContainer:(BOOL)a4;
- (id)_bestCandidateForLinearFocusMovement:(id)a0;
- (id)_bestCandidateForNonLinearFocusMovement:(id)a0;
- (id)_dummyFocusItemForFocusMovement:(id)a0 searchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (id)_environmentContainersToCheckForRequest:(id)a0;
- (id)_findFocusCandidateByExhaustivelySearchingEnvironment:(id)a0 scrollableContainer:(id)a1 forRequest:(id)a2;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)a0;
- (id)_findFocusCandidateWithoutLoadingScrollableContentInEnvironment:(id)a0 container:(id)a1 forRequest:(id)a2 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)_isMovementValidForFocusSequences:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumSearchAreaForContainer:(id)a0 inCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumSearchAreaForContainer:(id)a0 inCoordinateSpace:(id)a1 shouldLoadScrollableContainer:(BOOL)a2;
- (id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)a0;
- (id)contextForFocusMovement:(id)a0;
- (BOOL)performFocusMovement:(id)a0;

@end
