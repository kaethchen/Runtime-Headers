@interface ConversationKit.PipZoomControl : NSObject {
    void /* unknown type, empty encoding */ minimumZoomFactor;
    void /* unknown type, empty encoding */ zoomCameraSwitchFactorDefault;
    void /* unknown type, empty encoding */ zoomControlOffset;
    void /* unknown type, empty encoding */ maximumZoomFactor;
    void /* unknown type, empty encoding */ maximumZoomFactorScaler;
    void /* unknown type, empty encoding */ currentZoomFactor;
    void /* unknown type, empty encoding */ currentCameraUID;
    void /* unknown type, empty encoding */ pinchStartZoomFactor;
    void /* unknown type, empty encoding */ zoomFactorScale;
}

@property (class, nonatomic, readonly) BOOL isZoomSupported;

- (id)init;
- (void).cxx_destruct;

@end
