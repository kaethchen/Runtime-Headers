@interface IKPictureTakerView : IKImageCropView {
    void *_ikReserved;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)resetCursorRects;
- (void)IKDVGrabberUpdated:(id)a0;
- (BOOL)isLiveCapturing;
- (void)stopLiveCapture;
- (BOOL)isTakingPicture;
- (BOOL)__isRoomWellLit:(char *)a0 size:(struct CGSize { double x0; double x1; })a1 bpr:(int)a2 skipFirstComponent:(BOOL)a3 spp:(int)a4;
- (void)_finalizeDirectTakePicture;
- (void)abortTakePicture;
- (void)cameraIsGone:(id)a0;
- (id)cameraNotConnectedText;
- (id)cameraOffImage;
- (id)cameraOffText;
- (void)cameraPictureNotification:(id)a0;
- (void)cropElementDidLiveUpdate:(id)a0;
- (void)directTakePicture;
- (void)disposeAudio;
- (void)drawIrisClosedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawPositioningCircle;
- (void)fireNextCameraSequence;
- (void)irisClosed:(id)a0;
- (void)irisOpened:(id)a0;
- (BOOL)isIrisClosed;
- (BOOL)isRoomWellLit;
- (void)pickerViewCommonInit;
- (void)scheduleCameraPictureNotificationAfterDelay:(double)a0;
- (void)setCameraCaptureDelay:(float)a0;
- (void)setCountdownDelegate:(id)a0;
- (void)setDisableCountDown:(BOOL)a0;
- (void)setDisableFlash:(BOOL)a0;
- (void)setFlashColor:(id)a0;
- (void)setFlashFallTime:(float)a0;
- (void)setFlashRiseTime:(float)a0;
- (void)setFlashSaturation:(float)a0;
- (void)setFlashSustainTime:(float)a0;
- (short)setupAudio;
- (void)startListeningForCameraEvents;
- (BOOL)startLiveCapture;
- (BOOL)startSequenceGrabber;
- (void)stopListeningForCameraEvents;
- (void)stopSequenceGrabber;
- (void)takePicture;

@end
