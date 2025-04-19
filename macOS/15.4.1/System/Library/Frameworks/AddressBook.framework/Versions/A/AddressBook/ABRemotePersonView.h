@interface ABRemotePersonView : NSRemoteView <NSRemoteViewDelegate>

@property (weak, nonatomic) id objectToExport;
@property (readonly) BOOL shouldRetainExportedObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)exportedInterface;
- (id)exportedObject;
- (id)serviceName;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)serviceViewControllerInterface;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (id)serviceSubclassName;

@end
