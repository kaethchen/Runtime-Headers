@class KHPhotoCountFilterController, NSArray, NSString, KHLayoutPickerController, KHTreatmentPickerController, KHLayoutFilterController, KHInspectorTileViewController;

@interface KHLayoutInspectorController : KHInspectorViewController <KHLayoutPickerDelegate, KHInspectorPanelProtocol>

@property (retain, nonatomic) KHTreatmentPickerController *treatmentPicker;
@property (retain, nonatomic) KHLayoutPickerController *layoutPicker;
@property (retain, nonatomic) KHLayoutFilterController *layoutFilter;
@property (retain, nonatomic) KHPhotoCountFilterController *photoCountFilter;
@property (retain, nonatomic) KHInspectorTileViewController *treatmentTileController;
@property (retain, nonatomic) KHInspectorTileViewController *contentFilterTileController;
@property (retain, nonatomic) KHInspectorTileViewController *photoCountFilterTileController;
@property (retain, nonatomic) KHInspectorTileViewController *layoutOptionsTileController;
@property BOOL hideTreatmentPicker;
@property (retain, nonatomic) NSArray *layoutArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)badgeImage;
- (id)setupStackView;
- (void)pickerRequiresInspectorRefresh:(id)a0;
- (id)initWithLayouts:(id)a0;
- (void)setupModelBindings;
- (void)teardownBindings;
- (id)viewForPresentationMode:(int)a0;

@end
