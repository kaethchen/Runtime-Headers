@class _PNSafeAssetAnalyzer;

@interface PNSafeAssetAnalyzer : NSObject {
    _PNSafeAssetAnalyzer *_safeAssetAnalyzer;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (short)eligibilityStateWithAsset:(id)a0 curationContext:(id)a1;

@end
