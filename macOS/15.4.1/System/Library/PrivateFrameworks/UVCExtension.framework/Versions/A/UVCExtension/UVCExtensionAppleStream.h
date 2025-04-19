@class UVCDeviceControl;

@interface UVCExtensionAppleStream : UVCExtensionStream {
    UVCDeviceControl *_keyFrameRateControl;
}

- (void).cxx_destruct;
- (void)handleProcessingError:(id)a0;
- (BOOL)setActiveFrameDuration:(id)a0;

@end
