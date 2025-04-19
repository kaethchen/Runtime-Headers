@class AVAudioChannelLayout, NSArray;

@interface AVAudioAggregateStreamTopology : NSObject

@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (readonly, nonatomic) BOOL hasCustomChannelMappings;
@property (readonly, nonatomic) NSArray *hardwareStreams;
@property (readonly, nonatomic) unsigned long long policy;

+ (id)createStreamsWithDevice:(id)a0 direction:(unsigned int)a1 error:(id *)a2;
+ (id)createStreamsWithDevice:(id)a0 error:(id *)a1;

- (id)init;
- (id)initWithStream:(id)a0;
- (unsigned long long)channelCount;
- (id)initWithPort:(id)a0;
- (id)initWithMappings:(id)a0 layout:(id)a1 policy:(unsigned long long)a2;
- (id)channelLayoutForPort:(id)a0;
- (id)channelMapForPort:(id)a0;
- (id)initWithStreamTopology:(id)a0 layout:(id)a1;
- (BOOL)setChannelLayout:(id)a0 port:(id)a1 error:(id *)a2;
- (BOOL)setChannelMap:(id)a0 port:(id)a1 error:(id *)a2;

@end
