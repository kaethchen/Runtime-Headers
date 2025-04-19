@class NTPBTodayResultOperationInfo;
@protocol FCContentContext, NFCopying, NTGroupingServiceType, FCFeedPersonalizerFactoryType, NTTodayBannerValidator;

@interface NTTodayResultOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) id<FCFeedPersonalizerFactoryType> feedPersonalizerFactory;
@property (retain, nonatomic) id<NTGroupingServiceType> groupingService;
@property (retain, nonatomic) id<NTTodayBannerValidator> todayBannerValidator;
@property (copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;
@property (copy, nonatomic) id /* block */ headlineResultCompletionHandler;

- (id)init;
- (void).cxx_destruct;

@end
