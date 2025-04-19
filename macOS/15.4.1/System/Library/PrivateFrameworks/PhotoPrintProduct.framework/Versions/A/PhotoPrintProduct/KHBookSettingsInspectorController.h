@class KHProjectSettingsPickerController, NSString, KHPageCountPickerController, KHBookProjectLayoutsDataSource, KHInspectorTileViewController;

@interface KHBookSettingsInspectorController : KHInspectorViewController <KHPageCountPickerDelegate>

@property (retain) KHInspectorTileViewController *pageCountTileController;
@property (retain) KHInspectorTileViewController *densityTileController;
@property (retain) KHInspectorTileViewController *settingsTileController;
@property (weak) KHBookProjectLayoutsDataSource *dataSource;
@property (retain) KHPageCountPickerController *pageCountPicker;
@property (retain, nonatomic) KHProjectSettingsPickerController *projectSettingsController;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
