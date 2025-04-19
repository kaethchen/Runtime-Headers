@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) BOOL channelEnabled;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *owningPortUID;
@property (readonly, nonatomic) unsigned long long channelNumber;
@property (readonly, nonatomic) unsigned int channelLabel;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 OwningPort:(id)a1 ChannelNumber:(unsigned long long)a2 ChannelLabel:(unsigned int)a3;
- (BOOL)setChannelEnabled:(BOOL)a0 error:(id *)a1;

@end
