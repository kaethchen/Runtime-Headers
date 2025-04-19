@class NSArray, CHStrokeGroupingManager;

@interface CHGroupingPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;
@property (retain, nonatomic) CHStrokeGroupingManager *groupingManager;
@property (nonatomic) BOOL saveInputDrawings;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSequence:(id)a0 groupingManager:(id)a1;
- (id)initWithStep:(id)a0 groupingManager:(id)a1;
- (id)process:(id)a0 options:(id)a1;

@end
