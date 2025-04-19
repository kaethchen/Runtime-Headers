@class DVPFrame, NSString, DVPFrameOpticalFlow;

@interface DVPOpticalFlowParameters : NSObject <DVPParameters>

@property (readonly, nonatomic) DVPFrame *sourceFrame;
@property (readonly, nonatomic) DVPFrame *nextFrame;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) DVPFrameOpticalFlow *opticalFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 submissionMode:(long long)a2 opticalFlow:(id)a3;

@end
