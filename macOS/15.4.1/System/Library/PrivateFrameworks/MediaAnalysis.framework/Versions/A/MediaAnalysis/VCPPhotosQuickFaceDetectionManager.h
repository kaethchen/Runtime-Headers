@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (int)_persistFaces:(id)a0 forAsset:(id)a1;
- (int)processAsset:(id)a0;

@end
