@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult

@property (readonly, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)groupingResultUpdatedWithGroupReplacements:(id)a0;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2 groupingResultsByStrategyIdentifier:(id)a3;
- (id)strokeGroupsOfClass:(long long)a0;

@end
