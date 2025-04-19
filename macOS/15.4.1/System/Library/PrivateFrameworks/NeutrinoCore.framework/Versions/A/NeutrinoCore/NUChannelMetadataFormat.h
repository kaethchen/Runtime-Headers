@interface NUChannelMetadataFormat : NUChannelFormat

@property (readonly, nonatomic) long long metadataType;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (long long)channelType;
- (id)initWithMetadataType:(long long)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;

@end
