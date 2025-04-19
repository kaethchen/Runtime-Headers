@class NSSet, DSPGMLInputProvider;
@protocol MLFeatureProvider, SNMLModelObjCProtocol;

@interface DSPGCoreMLInfo : NSObject {
    id<SNMLModelObjCProtocol> _model;
    NSSet *_feedbackConnections;
    DSPGMLInputProvider *_inputProvider;
    id<MLFeatureProvider> _outputProvider;
}

- (void).cxx_destruct;

@end
