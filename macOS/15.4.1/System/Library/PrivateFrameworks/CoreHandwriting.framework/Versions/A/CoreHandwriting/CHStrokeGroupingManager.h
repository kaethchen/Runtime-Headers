@class NSArray, CHGroupingModel, NSDictionary;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject {
    NSDictionary *_groupingStrategiesByIdentifierForTextStrokeClasses;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHGroupingModel *strokeGroupingModel;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

+ (id)identifyStableStrokeIdentifiersUsingOrderedStrokeIdentifiers:(id)a0 prevOrderedStrokeIdentifiers:(id)a1 strokeClassificationResult:(id)a2 prevStrokeClassificationResult:(id)a3;
+ (id)mergeableStrokeGroupClustersFromSortedStrokeGroups:(id)a0;
+ (id)sortedGroupsBySizeDescending:(id)a0;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 strokeGroupingModel:(id)a1 locales:(id)a2 isInlineContinuousMode:(BOOL)a3 inlineContinuousModeTargets:(id)a4 isMathMode:(BOOL)a5;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4 replacementStrokeGroup:(id *)a5;
- (id)strokesForIdentifiers:(id)a0;
- (id)updateGroupingResult:(id)a0 addingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 orderedStrokeIdentifiers:(id)a3 lastOrderedStrokeIdentifiers:(id)a4 strokeClassificationResult:(id)a5 lastStrokeClassificationResult:(id)a6 cancellationBlock:(id /* block */)a7;

@end
