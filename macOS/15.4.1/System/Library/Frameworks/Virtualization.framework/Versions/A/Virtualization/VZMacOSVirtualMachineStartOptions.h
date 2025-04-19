@interface VZMacOSVirtualMachineStartOptions : VZVirtualMachineStartOptions {
    BOOL _forceDFU;
    BOOL _stopInIBootStage1;
    BOOL _stopInIBootStage2;
}

@property (setter=_setForceDFU:) BOOL _forceDFU;
@property (setter=_setStopInIBootStage1:) BOOL _stopInIBootStage1;
@property (setter=_setStopInIBootStage2:) BOOL _stopInIBootStage2;
@property BOOL startUpFromMacOSRecovery;

- (struct StartOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })_startOptions;

@end
