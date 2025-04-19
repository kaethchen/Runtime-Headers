@class NSString;

@interface AXMAudioDataSource : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) void *sampleBuffer;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic, getter=isCircular) BOOL circular;
@property (nonatomic) double level;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 sampleRate:(double)a1 circular:(BOOL)a2;
- (void)normalizeAudio;

@end
