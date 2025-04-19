@class NSArray, NSDictionary;

@interface FCForYouQueryResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *channelDefaultSectionRequests;
@property (readonly, copy, nonatomic) NSArray *channelOtherSectionsRequests;
@property (readonly, copy, nonatomic) NSArray *topicRequests;
@property (readonly, copy, nonatomic) NSArray *paidBundleRequests;
@property (readonly, copy, nonatomic) NSArray *hiddenFeedRequests;
@property (readonly, copy, nonatomic) NSArray *sidecarRequests;
@property (readonly, copy, nonatomic) NSArray *allRequests;
@property (readonly, copy, nonatomic) NSDictionary *feedContextByFeedID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChannelDefaultSectionRequests:(id)a0 channelOtherSectionsRequests:(id)a1 topicRequests:(id)a2 paidBundleRequests:(id)a3 hiddenFeedRequests:(id)a4 sidecarRequests:(id)a5 feedContextByFeedID:(id)a6;

@end
