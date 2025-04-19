@class NSString, AVAudioSessionChannelDescription;

@interface TTSAudioSessionChannel : NSObject

@property (retain, nonatomic) AVAudioSessionChannelDescription *channel;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) unsigned long long channelNumber;
@property (nonatomic) unsigned int channelLabel;
@property (retain, nonatomic) NSString *owningPortUID;

+ (id)channelWithChannel:(id)a0;
+ (id)convertChannels:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
