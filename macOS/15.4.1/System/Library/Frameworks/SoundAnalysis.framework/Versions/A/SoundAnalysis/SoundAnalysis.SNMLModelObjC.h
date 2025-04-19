@class MLModelDescription;

@interface SoundAnalysis.SNMLModelObjC : NSObject <SNMLModelObjCProtocol, SNMLModelObjCProtocol> {
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
