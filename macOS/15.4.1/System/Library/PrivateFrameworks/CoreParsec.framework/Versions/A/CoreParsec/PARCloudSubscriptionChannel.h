@class SFCloudChannelsRequestItem;

@interface PARCloudSubscriptionChannel : PARSubscriptionChannel

@property (retain, nonatomic) SFCloudChannelsRequestItem *channelItem;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelItem:(id)a0;

@end
