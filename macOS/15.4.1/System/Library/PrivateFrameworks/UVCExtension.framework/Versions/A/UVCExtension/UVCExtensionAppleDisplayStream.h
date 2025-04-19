@class NSString;

@interface UVCExtensionAppleDisplayStream : UVCExtensionAppleStream {
    NSString *_cfSupport;
    NSString *_cmioCenterStageRectOfInterestProperty;
    NSString *_cmioManualFramingSupportedProperty;
    NSString *_cmioZoomFactorProperty;
    NSString *_cmioStartPanningAtPointProperty;
    NSString *_cmioPanWithTranslationProperty;
    NSString *_cmioCenterStageFramingModeProperty;
    NSString *_cmioZoomFactorConstantsByManualFramingDeviceType;
    NSString *_cmioDeviceHasUltraWideCamera;
    NSString *_cmioManualFramingDeviceTypeProperty;
    BOOL _cfSupported;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _centerStageRectOfInterest;
    double _zoomFactor;
    struct CGPoint { double x; double y; } _startPanningPoint;
    struct CGPoint { double x; double y; } _panningTranslation;
    unsigned int _centerStageFramingMode;
}

- (void).cxx_destruct;
- (id)availableProperties;
- (void)sendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 discontinuity:(unsigned int)a1 hostTimeInNanoseconds:(unsigned long long)a2;
- (void)_registerForManualFramingControlsChangedNotifications;
- (void)_unregisterForManualFramingControlsChangedNotifications;
- (id)initWithDevice:(id)a0 uvcFormats:(id)a1 source:(id)a2 attributes:(id)a3;
- (void)observeValueForKeyPathSync:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)setStreamPropertiesSync:(id)a0 error:(id *)a1;
- (id)streamPropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (void)terminationReceived;

@end
