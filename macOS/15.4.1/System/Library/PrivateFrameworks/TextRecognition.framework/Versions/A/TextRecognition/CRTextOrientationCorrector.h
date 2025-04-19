@class CRCTCCVNLPOrientationDecoder, CRTextOrientationRecognizerConfiguration, CRTextOrientationModelV1;

@interface CRTextOrientationCorrector : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceLock;
}

@property (retain, nonatomic) CRTextOrientationModelV1 *model;
@property (retain, nonatomic) CRCTCCVNLPOrientationDecoder *decoder;
@property (retain, nonatomic) CRTextOrientationRecognizerConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (long long)_angleDirectionOfBaselineAngle:(double)a0;
- (long long)_calculateAngleDirectionForInput:(id)a0;
- (long long)_calculateAngleDirectionForTextFeatureInfo:(id)a0;
- (unsigned long long)_calculateLayoutDirectionForInput:(id)a0;
- (id)_lineRegion:(id)a0 applyingAngleDirection:(long long)a1;
- (BOOL)_loadResourcesWithError:(id *)a0;
- (id)_localeSortedRegions:(id)a0 indexSet:(id)a1;
- (long long)_orientationForBaselineAngle:(double)a0;
- (long long)_orientationForBaselineAngle:(double)a0 layoutDirection:(unsigned long long)a1;
- (id)_scriptCorrectionBasedOnLayoutDirectionOnLineRegions:(id)a0;

@end
