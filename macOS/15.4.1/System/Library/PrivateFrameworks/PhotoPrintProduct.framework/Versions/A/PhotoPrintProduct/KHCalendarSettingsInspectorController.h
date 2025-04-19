@class KHProjectSettingsPickerController, KHCalendarHolidayPickerController, KHCalendarDateRangePickerController, KHInspectorTileViewController, KHCalendarProjectLayoutsDataSource;

@interface KHCalendarSettingsInspectorController : KHInspectorViewController

@property (retain) KHInspectorTileViewController *timeTileController;
@property (retain) KHInspectorTileViewController *holidayTileController;
@property (retain) KHInspectorTileViewController *settingsTileController;
@property (retain) KHCalendarDateRangePickerController *timePicker;
@property (retain) KHCalendarHolidayPickerController *holidayPicker;
@property (retain) KHCalendarProjectLayoutsDataSource *dataSource;
@property (readonly, nonatomic) KHProjectSettingsPickerController *projectSettingsController;

- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithProjectDatasource:(id)a0;

@end
