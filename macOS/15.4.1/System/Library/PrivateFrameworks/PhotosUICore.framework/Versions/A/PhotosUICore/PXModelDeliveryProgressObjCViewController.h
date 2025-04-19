@class _TtC12PhotosUICore37PXModelDeliveryProgressViewController, NSError;

@interface PXModelDeliveryProgressObjCViewController : UXViewController

@property (retain, nonatomic) _TtC12PhotosUICore37PXModelDeliveryProgressViewController *mdpvc;
@property (nonatomic) BOOL isiPadConfiguration;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) NSError *errorToReport;

- (void).cxx_destruct;
- (void)loadView;
- (void)setErrorState:(id)a0;
- (void)reportProgress:(double)a0 stage:(unsigned long long)a1;
- (void)clearErrorState;
- (void)_createProgressViewController;

@end
