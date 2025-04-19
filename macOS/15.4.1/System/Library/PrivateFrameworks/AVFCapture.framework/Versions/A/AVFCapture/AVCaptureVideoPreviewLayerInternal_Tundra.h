@class AVCaptureSession_Tundra, AVCaptureConnection_Tundra, NSString, CALayer, NSDictionary;

@interface AVCaptureVideoPreviewLayerInternal_Tundra : NSObject {
    AVCaptureSession_Tundra *session;
    AVCaptureConnection_Tundra *connection;
    CALayer *sublayer;
    struct CGSize { double width; double height; } sourceSize;
    NSString *gravity;
    BOOL disableActions;
    BOOL isPresentationLayer;
    BOOL visible;
    struct __CFDictionary { } *videoPreviewSynchronizerUnits;
    struct __CFDictionary { } *videoPreviewOutputUnits;
    NSDictionary *pixelBufferAttributes;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } metadataTransform;
    double rollAdjustment;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

@end
