@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSSet *locationNodes;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_locationTitle;
- (id)_timeTitle;
- (id)initWithLocationNodes:(id)a0 titleGenerationContext:(id)a1;

@end
