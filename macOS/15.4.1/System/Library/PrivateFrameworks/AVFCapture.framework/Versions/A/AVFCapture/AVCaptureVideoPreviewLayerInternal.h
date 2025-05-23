@class AVWeakReference, NSString, NSArray, CALayer, NSDictionary, AVCaptureSession, NSObject, NSMutableArray, AVCaptureConnection, AVSemanticStyle;
@protocol OS_dispatch_queue;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    CALayer *sublayer;
    struct CGSize { double width; double height; } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    unsigned int imageQueueSlot;
    struct CGSize { double width; double height; } previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    BOOL disableActions;
    AVWeakReference *weakReference;
    BOOL isPreviewing;
    long long orientation;
    BOOL automaticallyAdjustsMirroring;
    BOOL mirrored;
    BOOL isPresentationLayer;
    BOOL visible;
    BOOL isPaused;
    BOOL chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } captureDeviceTransform;
    double rollAdjustment;
    BOOL depthDataDeliverySupported;
    BOOL depthDataDeliveryEnabled;
    BOOL filterRenderingEnabled;
    BOOL unoptimizedFilterRenderingEnabled;
    NSArray *videoPreviewFilters;
    BOOL semanticStyleRenderingSupported;
    BOOL semanticStyleRenderingEnabled;
    AVSemanticStyle *semanticStyle;
    double oddScreenWidth;
    double oddScreenScale;
    BOOL portraitAutoSuggestEnabled;
    BOOL portraitAutoSuggestSupported;
    NSMutableArray *metadataObjectLayers;
    NSDictionary *metadataObjectLayerStringAttributes;
    double metadataObjectLayerContentScale;
    struct CGColor { } *metadataObjectLayerStrokeColor;
    struct CGColor { } *metadataObjectLayerFillColor;
    struct CGColor { } *alternativeMetadataObjectLayerStrokeColor;
    BOOL zoomPictureInPictureOverlaySupported;
    BOOL zoomPictureInPictureOverlayEnabled;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomPictureInPictureOverlayRect;
}

@end
