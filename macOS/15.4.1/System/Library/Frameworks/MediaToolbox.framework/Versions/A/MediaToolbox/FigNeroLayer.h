@class NSObject;
@protocol OS_dispatch_queue, FigNeroLayerDelegate;

@interface FigNeroLayer : CALayer {
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid { } *_neroid;
    id<FigNeroLayerDelegate> _neroDelegate;
}

@property (nonatomic) id<FigNeroLayerDelegate> neroDelegate;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_start;
- (void)_dispatchNotification:(id)a0 value:(id)a1;

@end
