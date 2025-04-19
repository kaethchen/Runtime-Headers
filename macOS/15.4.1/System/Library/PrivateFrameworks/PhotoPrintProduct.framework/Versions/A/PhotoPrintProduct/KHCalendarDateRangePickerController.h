@class NSTextField, NSStepper, NSPopUpButton, KHCalendarProjectLayoutsDataSource;

@interface KHCalendarDateRangePickerController : UXViewController

@property (retain) NSTextField *startLabel;
@property (retain) NSTextField *numberOfMonthsLabel;
@property (weak) KHCalendarProjectLayoutsDataSource *dataSource;
@property (retain) NSPopUpButton *monthMenuButton;
@property (retain) NSPopUpButton *yearMenuButton;
@property (retain) NSPopUpButton *numberOfMonthsMenuButton;
@property (retain) NSTextField *monthNumberField;
@property (retain) NSStepper *monthNumberStepper;

- (void).cxx_destruct;
- (void)loadView;
- (void)changeStartDate:(id)a0;
- (id)initWithProjectDatasource:(id)a0;
- (void)numberOfMonthsChanged:(id)a0;

@end
