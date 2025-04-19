@class NSString, NTForYouRequest;
@protocol NTGroupingServiceType;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (readonly, copy, nonatomic) NTForYouRequest *forYouRequest;
@property (readonly, copy, nonatomic) NSString *localNewsTagID;
@property (readonly, nonatomic) unsigned long long localNewsPromotionIndex;
@property (readonly, copy, nonatomic) id<NTGroupingServiceType> groupingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (id)initWithForYouConfiguration:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 localNewsTagID:(id)a3 hiddenFeedIDs:(id)a4 allowPaidBundleFeed:(BOOL)a5 mutedTagIDs:(id)a6 purchasedTagIDs:(id)a7 rankedAllSubscribedTagIDs:(id)a8 bundleSubscriptionProvider:(id)a9 groupingService:(id)a10;

@end
