@class NSView, IKNStatusView;

@interface IKScannerNoDeviceView : NSView {
    IKNStatusView *_statusView;
    NSView *_simpleView;
    NSView *_advancedView;
}

@property (nonatomic) long long mode;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0;
- (void)setStatusText:(id)a0;
- (void)setStatusDelegate:(id)a0;
- (void)setCanCancel:(BOOL)a0;

@end
