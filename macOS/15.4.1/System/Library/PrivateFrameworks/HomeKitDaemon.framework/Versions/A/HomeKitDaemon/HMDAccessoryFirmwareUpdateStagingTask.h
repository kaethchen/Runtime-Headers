@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (void)run;
- (id)criteria;
- (BOOL)shouldRun;
- (BOOL)isUserInitiated;
- (id)initWithSession:(id)a0 profile:(id)a1 userInitiated:(BOOL)a2 delay:(BOOL)a3;

@end
