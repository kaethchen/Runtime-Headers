@class KHCardProjectLayoutsDataSource, KHProjectSettingsPickerController, KHInspectorTileViewController;

@interface KHCardSettingsInspectorController : KHInspectorViewController

@property (retain) KHInspectorTileViewController *settingsTileController;
@property (retain) KHCardProjectLayoutsDataSource *dataSource;
@property (readonly, nonatomic) KHProjectSettingsPickerController *projectSettingsController;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithProjectDatasource:(id)a0;

@end
