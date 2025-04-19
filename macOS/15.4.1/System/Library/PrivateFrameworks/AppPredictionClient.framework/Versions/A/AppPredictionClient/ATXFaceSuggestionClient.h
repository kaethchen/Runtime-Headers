@class ATXFaceGalleryBiomeStream, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging> {
    NSXPCConnection *_connection;
    ATXFaceGalleryBiomeStream *_stream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_logEvent:(id)a0;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)logComplicationGalleryDidAppearWithComplicationSets:(id)a0;
- (void)logComplicationGalleryDidDisappear;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void)logDidAddComplication:(id)a0;
- (void)logDidAddComplicationSet:(id)a0;
- (void)logDidHideFaceGalleryItem:(id)a0;
- (void)logDidTapComplication:(id)a0;
- (void)logDidTapComplicationSet:(id)a0;
- (void)logDidTapFaceGalleryItem:(id)a0;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)logFaceGalleryDidDisappear;
- (void)logFaceGalleryItemsDidAppear:(id)a0;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)reloadLockScreenSuggestionsWithCompletion:(id /* block */)a0;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;

@end
