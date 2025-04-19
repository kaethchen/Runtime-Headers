@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly, nonatomic) BOOL curatedLibraryFTEIsReady;
@property (readonly, nonatomic) BOOL requiresValidGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasCompletedEnrichmentForLibrary:(id)a0;
+ (BOOL)_hasEnoughHighlightsInPhotoLibrary:(id)a0 atEnrichmentState:(unsigned short)a1 aboveThreshold:(double)a2;
+ (BOOL)hasCompletedFirstTimeExperienceForLibrary:(id)a0;

@end
