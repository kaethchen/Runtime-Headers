@class NSArray;

@interface SCMLImageSanitizerRequest : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) BOOL keepGoing;
@property (retain, nonatomic) NSArray *embeddings;
@property (nonatomic) unsigned int style;
@property (nonatomic) BOOL isChildPresent;

- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;

@end
