@class PXStoryConfiguration, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log, PXMediaAnalyzer;

@interface PXStoryMediaAnalysisMovieHighlightsProducer : NSObject <PXStoryMovieHighlightsProducer> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_results_queue;
    NSObject<OS_os_log> *_log;
    PXStoryConfiguration *_storyConfiguration;
    BOOL _didProcessConfiguration;
    NSDictionary *_customTimeRangeByAssetUUID;
}

@property (retain, nonatomic) id<PXMediaAnalyzer> mediaAnalyzer;
@property (nonatomic) unsigned long long batchSize;

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilScheduled;
- (id)_requestMovieCurationForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestMovieHighlightsForAssets:(id)a0 partialCollection:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;
- (id)initWithStoryConfiguration:(id)a0;
- (id)requestMovieHighlightsForAssets:(id)a0 partialCollection:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;

@end
