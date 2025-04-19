@interface ULWiFiScanChannel : NSObject <NSCopying>

@property (nonatomic) unsigned long long band;
@property (nonatomic) unsigned long long channelNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithBand:(unsigned long long)a0 andChannelNumber:(unsigned long long)a1;

@end
