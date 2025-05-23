@protocol PGEventEnrichment;

@interface PGTripHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) id<PGEventEnrichment> collection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_locationTitle;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)initWithCollection:(id)a0 titleGenerationContext:(id)a1;

@end
