@interface NUChannelFormat : NSObject

@property (readonly, nonatomic) long long channelType;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (id)subchannelFormatAtIndex:(unsigned long long)a0;
- (id)subchannelFormatForKey:(id)a0;
- (BOOL)validateChannelData:(id)a0 error:(out id *)a1;

@end
