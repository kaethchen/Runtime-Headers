@class PKMathRecognitionController, PKRecognitionSessionManager, PKDrawing, NSString, NSUUID, NSMutableSet, _PKDataDetectorController;
@protocol PKRecognitionControllerInternalDelegate;

@interface PKRecognitionController : NSObject <PKRecognitionSessionManagerDelegate> {
    _PKDataDetectorController *_dataDetectorController;
    PKMathRecognitionController *_mathRecognitionController;
    NSUUID *_listenerID;
    NSMutableSet *_currentDrawingStrokeUUIDs;
}

@property (weak, nonatomic) id<PKRecognitionControllerInternalDelegate> internalDelegate;
@property (readonly, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (copy, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) _PKDataDetectorController *dataDetectorController;
@property (readonly, nonatomic) PKMathRecognitionController *mathRecognitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentDeviceSupportsAutoRefine;
+ (void)removeStrokesFromStyleInventory:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_drawingDidUpdate:(id)a0;
- (void)clearRefinableStrokes;
- (id)compactSurroundTextResults:(id)a0;
- (id)contextLookupResultsAtLocation:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)contextLookupResultsForPath:(struct CGPath { } *)a0 completion:(id /* block */)a1;
- (id)contextLookupResultsWithSelectedStrokes:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasOngoingAutoRefineAnimationTask;
- (id)initWithDrawing:(id)a0;
- (id)initWithDrawing:(id)a0 visibleOnscreenStrokes:(id)a1;
- (id)initWithDrawing:(id)a0 visibleOnscreenStrokes:(id)a1 useSessionCache:(BOOL)a2;
- (void)recognitionSessionManager:(id)a0 foundDataDetectorItems:(id)a1;
- (void)recognitionSessionManager:(id)a0 foundHashtagItems:(id)a1;
- (void)recognitionSessionManager:(id)a0 foundMentionItems:(id)a1;
- (void)recognitionSessionManager:(id)a0 foundProofreadingItems:(id)a1;
- (void)recognitionSessionManager:(id)a0 foundStrokeGroupItems:(id)a1;
- (id)reflowableLinesInitialStrokes:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)restartQueries;
- (void)setCalculateDocumentProvider:(id)a0;
- (void)setCanvasAttachmentProvider:(id)a0;
- (void)setDrawing:(id)a0 withVisibleOnscreenStrokes:(id)a1;
- (void)setVisibleOnscreenStrokes:(id)a0;
- (BOOL)shouldCancelForAutoRefineCompletion;
- (void)tagAsActive;
- (void)tagAsIdle;

@end
