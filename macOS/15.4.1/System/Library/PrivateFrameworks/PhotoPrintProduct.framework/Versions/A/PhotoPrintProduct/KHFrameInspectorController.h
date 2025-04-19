@class KHFrame, NSArray, KHTheme, NSString, KHTreatmentPickerController;

@interface KHFrameInspectorController : KHInspectorViewController <KHInspectorPanelProtocol>

@property (retain, nonatomic) KHTreatmentPickerController *treatmentPickerController;
@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) KHTheme *theme;
@property (readonly, nonatomic) KHFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)badgeImage;
- (id)initWithFrames:(id)a0 theme:(id)a1;
- (void)setupModelBindings;
- (void)teardownBindings;
- (id)viewForPresentationMode:(int)a0;

@end
