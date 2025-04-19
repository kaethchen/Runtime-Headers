@class OpticalFlowProcessor, MotionBlurEngine, DVPOpticalFlowConfiguration, DVPOpticalFlowParameters, DVPFrameOpticalFlow;

@interface VSAProcessor : BaseProcessor {
    OpticalFlowProcessor *_opticalFlowProcessor;
    DVPOpticalFlowConfiguration *_opticalFlowConfig;
    DVPOpticalFlowParameters *_opticalFlowParams;
    DVPFrameOpticalFlow *_nextOpticalFlowBuffers;
    DVPFrameOpticalFlow *_prevOpticalFlowBuffers;
    MotionBlurEngine *_motionBlurEngine;
    long long _frameWidth;
    long long _frameHeight;
    BOOL _usePrecomputedFlow;
    long long _flowBufferWidth;
    long long _flowBufferHeight;
    struct { struct __CVBuffer *forwardFlow; struct __CVBuffer *backwardFlow; } _flowPairs[2];
    int _nextIndex;
    int _prevIndex;
}

- (void).cxx_destruct;
- (BOOL)finishProcessing;
- (id)initWithFrameWidth:(long long)a0 FrameHeight:(long long)a1 usePrecomputedFlow:(BOOL)a2;
- (BOOL)processWithMotionBlurParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithMotionBlurConfig:(id)a0 error:(id *)a1;

@end
