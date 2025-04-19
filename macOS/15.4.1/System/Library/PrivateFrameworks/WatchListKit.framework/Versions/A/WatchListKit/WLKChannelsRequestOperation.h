@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (void).cxx_destruct;
- (id)initWithCaller:(id)a0;
- (void)processResponse;
- (id)initWithCaller:(id)a0 isFilteredByUserChannels:(BOOL)a1;

@end
