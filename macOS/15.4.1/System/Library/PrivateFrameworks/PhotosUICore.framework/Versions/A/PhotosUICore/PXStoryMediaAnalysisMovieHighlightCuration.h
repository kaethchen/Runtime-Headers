@class NSArray, NSString, NSDictionary, NSCache;
@protocol PXStoryMovieHighlight;

@interface PXStoryMediaAnalysisMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
    NSDictionary *_analysis;
    NSCache *_timeRangeCache;
}

@property (readonly, nonatomic) id<PXStoryMovieHighlight> bestHighlight;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> defaultHighlight;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> movieSummary;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> fullMovie;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> livePhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)movieHighlightCurationsFromMediaAnalysisResults:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaAnalysis:(id)a0;

@end
