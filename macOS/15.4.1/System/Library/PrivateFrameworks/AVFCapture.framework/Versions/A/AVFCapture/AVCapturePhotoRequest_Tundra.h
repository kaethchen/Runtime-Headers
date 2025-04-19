@class AVCaptureResolvedPhotoSettings_Tundra, AVWeakReference, AVCapturePhotoSettings_Tundra;
@protocol AVCapturePhotoCaptureDelegate_Tundra;

@interface AVCapturePhotoRequest_Tundra : NSObject {
    AVCaptureResolvedPhotoSettings_Tundra *_resolvedSettings;
    AVWeakReference *_weakReferenceDelegate;
}

@property (readonly, nonatomic) id<AVCapturePhotoCaptureDelegate_Tundra> delegate;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) BOOL imageMirrored;
@property (readonly, nonatomic) AVCapturePhotoSettings_Tundra *unresolvedSettings;
@property (retain, nonatomic) AVCaptureResolvedPhotoSettings_Tundra *resolvedSettings;

+ (id)requestWithDelegate:(id)a0 settings:(id)a1 imageOrientation:(long long)a2 imageMirrored:(BOOL)a3;

- (void)dealloc;
- (id)initWithDelegate:(id)a0 settings:(id)a1 imageOrientation:(long long)a2 imageMirrored:(BOOL)a3;

@end
