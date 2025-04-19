@interface WiFiUsageChannel : NSObject <NSCopying>

@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long channelFlags;
@property (nonatomic) int band;
@property (nonatomic) unsigned long long channelWidth;
@property (nonatomic) BOOL isDFSChannel;

+ (id)channelWithBssDetails:(id)a0;
+ (id)channelWithChannelInfo:(id)a0;
+ (id)channelWithScanChannel:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (id)initWithChannel:(unsigned long long)a0 flags:(unsigned long long)a1;
- (id)initWithChannel:(unsigned long long)a0 flags:(unsigned long long)a1 band:(int)a2 width:(unsigned long long)a3 isDFS:(BOOL)a4;
- (id)initWithChannel:(unsigned long long)a0 flags:(unsigned long long)a1 isDFS:(BOOL)a2;
- (void)updateDFSInfoFromSupportedChannels:(id)a0;

@end
