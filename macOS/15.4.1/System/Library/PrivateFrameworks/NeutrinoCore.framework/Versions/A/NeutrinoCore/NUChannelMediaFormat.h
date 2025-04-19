@interface NUChannelMediaFormat : NUChannelFormat

@property (readonly, nonatomic) long long mediaType;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMediaType:(long long)a0;
- (long long)channelType;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;

@end
