@class NSDictionary;

@interface ADFlowFrameOutput : NSObject

@property (nonatomic) struct __CVBuffer { } *depth;
@property (nonatomic) struct __CVBuffer { } *confidence;
@property (nonatomic) struct __CVBuffer { } *confidenceLevels;
@property (nonatomic) struct __CVBuffer { } *normals;
@property (nonatomic) struct __CVBuffer { } *uncertainty;
@property (nonatomic) struct __CVBuffer { } *depthMask;
@property (retain, nonatomic) NSDictionary *figuresOfMerit;

- (void)dealloc;
- (void).cxx_destruct;

@end
