@class PKMetalRendererController, NSArray, PKDrawing, PKStrokeGenerator, PKMetalConfig, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PKControllerDelegate, OS_dispatch_semaphore;

@interface PKController : NSObject {
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
    PKMetalConfig *_metalConfig;
    BOOL _sixChannelBlending;
    NSMutableArray *_liveDrawingUndoCommands;
}

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *drawingQueue;
@property BOOL onDrawingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property BOOL liveInteraction;
@property (weak, nonatomic) NSObject<PKControllerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *renderedStrokes;
@property (readonly, nonatomic) PKStrokeGenerator *inputController;
@property (nonatomic) BOOL drawBitmapEraserMask;

- (id)init;
- (void).cxx_destruct;
- (void)teardown;
- (void)updateDrawingWithErasedStrokes:(id)a0;
- (void)_addNewStrokes:(id)a0 wasAddedEarly:(BOOL)a1 hidden:(BOOL)a2 preDrawingChangedBlock:(id /* block */)a3;
- (void)_didRenderStrokes:(id)a0;
- (void)_didUpdateMutableRenderedStrokes;
- (void)_setDrawing:(id)a0 imageTexture:(id)a1;
- (void)addLiveStrokeEarly:(id)a0 completionBlock:(id /* block */)a1;
- (void)addNewRenderedStrokes:(id)a0 wasAddedEarly:(BOOL)a1 hidden:(BOOL)a2 preDrawingChangedBlock:(id /* block */)a3;
- (void)cancelLiveStroke;
- (void)cancelLongRunningRenders;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteraction;
- (void)hideStrokesWithoutUpdating:(id)a0 completion:(id /* block */)a1;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0 actualSize:(struct CGSize { double x0; double x1; })a1 singleComponent:(BOOL)a2 sixChannelBlendingMode:(long long)a3 metalConfig:(id)a4;
- (void)performAsyncInteractBlock:(id /* block */)a0;
- (void)setDrawing:(id)a0 imageTexture:(id)a1 completion:(id /* block */)a2;
- (void)setDrawing:(id)a0 tiles:(id)a1 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 contentImageTexture:(id)a3 contentImageTextureTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 completionBlock:(id /* block */)a5;
- (void)setLiveInteractionDrawing:(id)a0;

@end
