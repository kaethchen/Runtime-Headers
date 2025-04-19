@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (void)run;
- (id)criteria;
- (BOOL)shouldRun;
- (BOOL)isUserInitiated;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
