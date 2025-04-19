@class CHStrokeGroupingManager;

@interface CHGroupingPostprocessingStep : NSObject

@property (nonatomic) BOOL saveInputDrawings;
@property (retain, nonatomic) CHStrokeGroupingManager *groupingManager;

+ (id)remappedStrokeIndexes:(id)a0 originalStrokeIdentifiersOrdering:(id)a1 newStrokeIdentifiersOrdering:(id)a2;

- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
