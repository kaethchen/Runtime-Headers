@class NSImage;

@interface SKIFrame : NSObject

@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) double end;

- (void).cxx_destruct;
- (long long)comparisonForTimeInterval:(double)a0;
- (id)initWithStart:(double)a0 duration:(double)a1 image:(id)a2;

@end
