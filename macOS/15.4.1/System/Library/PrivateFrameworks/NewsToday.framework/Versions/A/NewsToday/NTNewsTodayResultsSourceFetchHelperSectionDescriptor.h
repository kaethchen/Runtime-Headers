@class NSString, NSURL;
@protocol NTSectionDescriptor, NTSectionQueueDescriptor;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor>

@property (readonly, copy, nonatomic) id<NTSectionDescriptor> sectionDescriptor;
@property (readonly, copy, nonatomic) id<NTSectionQueueDescriptor> parentSectionQueueDescriptor;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *subidentifier;
@property (readonly, copy, nonatomic) NSString *compactName;
@property (readonly, copy, nonatomic) NSString *referralBarName;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, nonatomic) unsigned long long cachedResultCutoffTime;
@property (readonly, nonatomic) unsigned long long fallbackOrder;
@property (readonly, nonatomic) unsigned long long minimumStoriesAllocation;
@property (readonly, nonatomic) unsigned long long maximumStoriesAllocation;
@property (readonly, nonatomic) int readArticlesFilterMethod;
@property (readonly, nonatomic) int seenArticlesFilterMethod;
@property (readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (readonly, nonatomic) unsigned long long supplementalInterSectionFilterOptions;
@property (readonly, nonatomic) unsigned long long supplementalIntraSectionFilterOptions;
@property (readonly, nonatomic) int promotionCriterion;
@property (readonly, nonatomic) NSString *backingTagID;
@property (nonatomic) unsigned long long paywalledArticlesMaxCount;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;
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
- (id)initWithSectionDescriptor:(id)a0 parentSectionQueueDescriptor:(id)a1;

@end
