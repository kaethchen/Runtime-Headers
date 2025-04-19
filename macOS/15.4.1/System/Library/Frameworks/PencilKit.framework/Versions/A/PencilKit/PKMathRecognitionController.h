@class PKRecognitionSessionManager, NSSet, NSDictionary, NSArray;
@protocol PKMathRecognitionControllerDelegate;

@interface PKMathRecognitionController : NSObject {
    NSSet *_currentItems;
    NSDictionary *_changeMap;
    NSDictionary *_stableIdentifierMap;
    NSDictionary *_sortIndexMap;
    NSDictionary *_expressionMap;
    NSDictionary *_shouldSolveMap;
    NSArray *_currentMathRecognitionItems;
    NSArray *_delayedItems;
    double _updateItemsDelay;
    struct { unsigned char delegateSupportsLatestTimestampForUserInteraction : 1; unsigned char delegateSupportsSolveStateChanged : 1; unsigned char delegateSupportsDidEraseStrokes : 1; } _delegateFlags;
}

@property (weak, nonatomic) PKRecognitionSessionManager *_sessionManager;
@property (nonatomic) BOOL isRTL;
@property (weak, nonatomic) id<PKMathRecognitionControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)reset;
- (void)_drawingDidUpdate:(id)a0;
- (void)_foundStrokeGroups:(id)a0;
- (void)_foundStrokeGroups:(id)a0 canDelay:(BOOL)a1;
- (BOOL)_shouldIgnoreMathResult:(id)a0;
- (void)_updateExpressionForItem:(id)a0 expression:(id)a1;
- (void)actuallySendDelayedItems:(id)a0;
- (void)cancelScheduledDelayedItems;
- (void)didEraseStrokes:(id)a0;
- (BOOL)processDelayedItemsIfNecessary;
- (void)scheduleDelayedItems:(id)a0 delay:(double)a1;
- (void)sendDelayedItems;

@end
