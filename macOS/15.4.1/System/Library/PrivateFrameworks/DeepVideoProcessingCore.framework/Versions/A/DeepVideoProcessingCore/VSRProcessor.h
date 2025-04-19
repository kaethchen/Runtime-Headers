@class OpticalFlowProcessor, FRNet, DVPOpticalFlowConfiguration, ImageSR, DVPOpticalFlowParameters, DVPFrameOpticalFlow;

@interface VSRProcessor : BaseProcessor {
    FRNet *_frNetEngine;
    ImageSR *_imageSREngine;
    OpticalFlowProcessor *_opticalFlowProcessor;
    DVPOpticalFlowConfiguration *_opticalFlowConfig;
    DVPOpticalFlowParameters *_opticalFlowParams;
    DVPFrameOpticalFlow *_opticalFlowBuffers;
    struct __CVBuffer { } *_forwardFlow;
    struct __CVBuffer { } *_backwardFlow;
    long long _frameWidth;
    long long _frameHeight;
    long long _inputType;
    BOOL _usePrecomputedFlow;
    BOOL _useMPS;
    int _nextIndex;
    int _prevIndex;
}

- (void).cxx_destruct;
- (BOOL)finishProcessing;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 inputType:(long long)a2 usePrecomputedFlow:(BOOL)a3;
- (BOOL)processWithSuperResolutionParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithSuperResolutionConfig:(id)a0 error:(id *)a1;

@end
