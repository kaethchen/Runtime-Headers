@class NSString;

@interface PXPassthroughMediaAnalyzer : NSObject <PXMediaAnalyzer> {
    id /* block */ _timeRangeProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMatchedTimeRanges:(id)a0;
- (id)initWithTimeRangeProvider:(id /* block */)a0;
- (id)requestAnalysisForAssets:(id)a0 options:(unsigned long long)a1 contexts:(id)a2 resultHandler:(id /* block */)a3;
- (id)requestMatchedTimeRangesForAsset:(id)a0 searchQueryMatchInfo:(id)a1 resultHandler:(id /* block */)a2;

@end
