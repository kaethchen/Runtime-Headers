@class VNPersonsModel, GDVUVisualUnderstandingService, PHPhotoLibrary, VCPPhotosFaceProcessingContext, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADPersonIdentificationTaskResource : VCPMADVisionResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPPhotosFaceProcessingContext *_faceProcessingContext;
    VNPersonsModel *_personIdentityModel;
    PHPhotoLibrary *_photoLibrary;
    GDVUVisualUnderstandingService *_vuService;
}

+ (id)sharedResource;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (id)photoLibrary;
- (void)_loadResources;
- (id)faceProcessingContext;
- (id)personIdentityModel;
- (id)vuService;

@end
