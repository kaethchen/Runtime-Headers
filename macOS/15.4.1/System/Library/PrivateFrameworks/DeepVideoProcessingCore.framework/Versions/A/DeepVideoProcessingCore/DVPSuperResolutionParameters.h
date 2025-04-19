@class DVPFrame, NSString, DVPFrameOpticalFlow;

@interface DVPSuperResolutionParameters : NSObject <DVPParameters>

@property (readonly, nonatomic) DVPFrame *sourceFrame;
@property (readonly, nonatomic) DVPFrame *previousFrame;
@property (readonly, nonatomic) DVPFrame *previousOutputFrame;
@property (readonly, nonatomic) DVPFrameOpticalFlow *opticalFlow;
@property (readonly, nonatomic) DVPFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 previousFrame:(id)a1 previousOutputFrame:(id)a2 opticalFlow:(id)a3 destinationFrame:(id)a4;

@end
