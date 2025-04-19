@class NSMutableArray;

@interface _NSDisplayOperationStack : NSObject {
    NSMutableArray *_stack;
    BOOL _threadIsViewDrawOperationThread;
}

+ (id)description;
+ (void)initialize;
+ (BOOL)anyThreadHasActiveDisplayOperationForWindow:(id)a0;
+ (id)currentThreadDisplayOperationStack;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (BOOL)attemptingConcurrentViewDrawing;
- (BOOL)threadIsViewDrawOperationThread;
- (void)blockOnAllRemainingDrawOperations;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)a0;
- (id)clipRootView;
- (void)enterDisplayOperationForWindow:(id)a0 windowRegion:(id)a1;
- (void)enterViewWillDrawOperationForWindow:(id)a0 windowRegion:(id)a1 clipRootView:(id)a2;
- (void)exitDisplayOperationForWindow:(id)a0;
- (void)exitViewWillDrawOperationForWindow:(id)a0;
- (void)queueDrawOperationForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 region:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4;
- (id)regionBeingDrawnForView:(id)a0;
- (void)setAttemptingConcurrentViewDrawing:(BOOL)a0;
- (void)setRegionBeingDrawn:(id)a0 forView:(id)a1;
- (void)setThreadIsViewDrawOperationThread:(BOOL)a0;
- (id)totalWindowRegionBeingDrawnByEnclosingDisplayOperations;
- (BOOL)viewWillDrawOperationIsActive;
- (id)windowBeingDrawn;
- (id)windowRegionBeingDrawn;

@end
