@class NSArray;

@interface ADFlowFrameInput : NSObject

@property (nonatomic) struct __CVBuffer { } *color;
@property (nonatomic) struct __CVBuffer { } *secondaryColor;
@property (nonatomic) struct __CVBuffer { } *pearl;
@property (retain, nonatomic) NSArray *pointClouds;

- (void)dealloc;
- (void).cxx_destruct;

@end
