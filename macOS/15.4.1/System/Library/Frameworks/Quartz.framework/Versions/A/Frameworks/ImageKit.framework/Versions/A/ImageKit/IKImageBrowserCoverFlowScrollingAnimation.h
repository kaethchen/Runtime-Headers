@class NSIndexSet;

@interface IKImageBrowserCoverFlowScrollingAnimation : IKAnimationGroup {
    id _grid;
    double _scrollingInitialDistance;
    double _scrollingInitialTime;
}

@property id grid;
@property double initialOffset;
@property BOOL snapMode;
@property BOOL overflowMode;
@property double scrollVelocity;
@property (retain) NSIndexSet *groupIndexes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
