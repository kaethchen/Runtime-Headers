@class LUIBatteryView, NSNumberFormatter;

@interface LUIBatteryStatusController : LUIController

@property int timeRemainingToken;
@property int lowBatteryToken;
@property (retain) NSNumberFormatter *percentFormatter;
@property (retain) LUIBatteryView *batteryView;

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (void)pauseController;
- (id)_colorForStyle;
- (id)_imageForBattery:(id)a0;
- (void)_layoutContentView;
- (void)_setupContentView;
- (id)_stringForBatteryPercentage:(id)a0;
- (void)resumeController;
- (void)tearDownController;

@end
