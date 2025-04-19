@class NSData, VCPCNNModelEspresso, NSArray;

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
}

@property (readonly) float *outputBeforeFc;
@property (readonly) float *outputBeforeFcSettling;
@property (readonly) float *outputBeforeSpatiialPooling;
@property (readonly) float *outputRes4;
@property (readonly) float *outputBeforeTemporalPooling;
@property (readonly) NSData *tensorBeforeTemporalPooling;

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (int)inference:(float *)a0 settling:(BOOL)a1;

@end
