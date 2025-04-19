@class DVPFrame, NSString, DVPFrameOpticalFlow;

@interface DVPMotionBlurParameters : NSObject <DVPParameters>

@property (readonly, nonatomic) DVPFrame *sourceFrame;
@property (readonly, nonatomic) DVPFrame *nextFrame;
@property (readonly, nonatomic) DVPFrame *previousFrame;
@property (readonly, nonatomic) DVPFrame *destinationFrame;
@property (readonly, nonatomic) DVPFrameOpticalFlow *nextOpticalFlow;
@property (readonly, nonatomic) DVPFrameOpticalFlow *previousOpticalFlow;
@property (readonly, nonatomic) long long motionBlurStrength;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 previousFrame:(id)a2 nextOpticalFlow:(id)a3 previousOpticalFlow:(id)a4 motionBlurStrength:(long long)a5 submissionMode:(long long)a6 destinationFrame:(id)a7;

@end
