@class DRSetupPanel;

@interface DRSetupPanelDeviceFilter : DRDeviceFilter {
    DRSetupPanel *setupPanel;
}

- (id)bestDeviceFromAvailableDevices:(id)a0;
- (BOOL)deviceCouldBeTarget:(id)a0;
- (id)initWithSetupPanel:(id)a0;

@end
