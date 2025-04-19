@class PACanvasItemView, NSView, PAItemView, PAItemController, NSObject;
@protocol PANUMediaView, OS_dispatch_queue;

@interface PAItemViewController : NSObject {
    PAItemController *_itemController;
    NSObject<OS_dispatch_queue> *_readyQueue;
    id /* block */ _readyHandler;
}

@property (retain) PACanvasItemView *canvasViewImpl;
@property (retain) PACanvasItemView *canvasView;
@property (readonly) PAItemView *itemView;
@property (readonly) NSView<PANUMediaView> *mediaView;
@property (copy) id /* block */ readyHandler;
@property (readonly, getter=isReady) BOOL ready;
@property (copy) id /* block */ errorHandler;

- (id)init;
- (void).cxx_destruct;
- (id)asset;
- (id)canvasView;
- (void)setCanvasView:(id)a0;
- (void)_callReadyHandlerWithSuccess:(BOOL)a0;
- (void)attachToCanvasView;
- (void)detachFromCanvasView;
- (id)initWithItemController:(id)a0;
- (id)itemController;
- (void)loadItem;
- (void)notifyReadyWithSuccess:(BOOL)a0;
- (void)positionDecorations;

@end
