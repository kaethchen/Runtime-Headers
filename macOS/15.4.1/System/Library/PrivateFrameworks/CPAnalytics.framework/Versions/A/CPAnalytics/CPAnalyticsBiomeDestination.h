@class NSString, NSMutableArray;

@interface CPAnalyticsBiomeDestination : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) NSMutableArray *eventMatchers;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_baseSampleFromEvent:(id)a0 matcher:(id)a1;
- (BOOL)_datasetNameInMemoryCuration:(id)a0;
- (void)_donateGenerativeMemoryCreationWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donateMemoryCurationWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donateMemoryMoviePlayedWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donateMemorySharedWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donateMemoryViewedWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoDeleteEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoEditEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoEngagmentEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoFavoritesEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoSearchEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donatePhotoShareEventWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_donateSearchSessionyWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_dondateMemoryNotificationWithBaseSample:(id)a0 andEvent:(id)a1;
- (void)_sendBiomeEvent:(id)a0 matcher:(id)a1;
- (void)_updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void)updateWithConfig:(id)a0;

@end
