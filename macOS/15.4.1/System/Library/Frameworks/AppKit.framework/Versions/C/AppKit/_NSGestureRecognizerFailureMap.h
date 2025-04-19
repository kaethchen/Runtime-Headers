@class NSMutableArray;

@interface _NSGestureRecognizerFailureMap : NSObject {
    NSMutableArray *_gestureRecognizers;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents;

+ (void)buildFailureMapForGestureRecognizer:(id)a0;
+ (void)buildFailureMapForGestureRecognizers:(id)a0;

- (void)dealloc;
- (id)description;
- (void)_gestureRecognizerFinished:(id)a0;
- (void)_queueRecognizersForResetIfFinished;
- (void)gestureRecognizerBecameDirty:(id)a0;
- (void)gestureRecognizerDeallocated:(id)a0;
- (void)gestureRecognizerFinished:(id)a0;
- (id)initWithRelatedGestures:(id)a0;
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)a0;
- (void)rebuildFailureMap;
- (void)reloadFailureMap;

@end
