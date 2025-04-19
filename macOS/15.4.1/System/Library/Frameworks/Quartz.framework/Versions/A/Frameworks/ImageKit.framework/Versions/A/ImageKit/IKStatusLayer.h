@class IKNCustomLayer, NSString, NSView, IKNProgressLayer, CATextLayer;

@interface IKStatusLayer : IKCenteredLayer {
    NSView *_view;
    CATextLayer *_statusTextLayer;
    IKNProgressLayer *_progressLayer;
    IKNCustomLayer *_cancelButtonLayer;
    double _offset;
    double _textSize;
}

@property (copy, nonatomic) NSString *statusText;
@property double yPosition;
@property (nonatomic) double progress;
@property (nonatomic) BOOL showCancelButton;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)defaultTextSize;
- (void)hideStatusLayer;
- (void)debugLayerTree:(id)a0;
- (void)showStatusLayer;
- (void)dumpLayer:(id)a0 prefix:(id)a1;
- (void)hideProgress;
- (BOOL)mouseDownInCancelButton:(struct CGPoint { double x0; double x1; })a0;
- (void)resizeStatusLayer;
- (void)setup:(id)a0;
- (void)showProgress;
- (id)updateStatusTextLayer;

@end
