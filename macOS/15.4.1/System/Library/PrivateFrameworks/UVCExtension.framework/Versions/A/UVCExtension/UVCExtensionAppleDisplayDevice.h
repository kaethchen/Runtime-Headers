@class UVCDeviceControl, NSString;

@interface UVCExtensionAppleDisplayDevice : UVCExtensionAppleDevice {
    UVCDeviceControl *_rollControl;
    UVCDeviceControl *_roiControl;
    UVCDeviceControl *_autoExposurePriorityControl;
    NSString *_dualCFSupport;
    BOOL _centerStageRectOfInterestSupported;
    BOOL _manualFramingSupported;
    double _manualFramingDefaultZoomFactor;
    double _manualFramingMinZoomFactor;
    double _manualFramingMaxZoomFactor;
    UVCDeviceControl *_zoomControl;
    UVCDeviceControl *_startPanningControl;
    UVCDeviceControl *_translationControl;
    UVCDeviceControl *_panTiltControl;
    UVCDeviceControl *_cameraResetControl;
    UVCDeviceControl *_centerStageFramingStyleControl;
}

@property (readonly, getter=isCenterStageRectOfInterestSupported) BOOL centerStageRectOfInterestSupported;
@property (readonly, getter=isManualFramingSupported) BOOL manualFramingSupported;
@property (readonly) double manualFramingDefaultZoomFactor;
@property (readonly) double manualFramingMinZoomFactor;
@property (readonly) double manualFramingMaxZoomFactor;
@property (readonly, getter=isCenterStageFramingModeSupported) BOOL centerStageFramingModeSupported;
@property double zoomFactor;

- (void).cxx_destruct;
- (unsigned int)location;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)validateFormats;
- (id)availablePropertiesSync;
- (void)configureControls:(id)a0;
- (id)devicePropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (unsigned int)getCMIOClassIDForControl:(id)a0 legacy:(BOOL)a1;
- (id)getFormatIdentifiers:(id)a0;
- (id)getUVCControls;
- (id)initWithInterface:(unsigned int)a0 provider:(id)a1;
- (void)performOneShotManualFraming;
- (void)resetManualFraming;
- (BOOL)setAEPriority:(BOOL)a0 error:(id *)a1;
- (BOOL)setCFForDefaultStreamInterface:(BOOL)a0 error:(id *)a1;
- (void)setCenterStageFramingStyle:(unsigned int)a0;
- (BOOL)setDeviceProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setObservationForStreamStateChange;
- (void)setPanningTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)setRollProperty:(id)a0 error:(id *)a1;
- (void)setStartPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
