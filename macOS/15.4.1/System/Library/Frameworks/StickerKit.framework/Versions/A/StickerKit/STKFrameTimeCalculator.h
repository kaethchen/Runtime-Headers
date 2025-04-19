@class NSArray;

@interface STKFrameTimeCalculator : NSObject

@property (nonatomic) long long frameCount;
@property (retain, nonatomic) NSArray *frames;
@property (nonatomic) double duration;
@property (nonatomic) long long lastFrameIndex;

+ (id)createFramesFromImages:(id)a0 durations:(id)a1;

- (void).cxx_destruct;
- (id)initWithImages:(id)a0 durations:(id)a1;
- (id)imageForDate:(id)a0 playbackStartDate:(id)a1;

@end
