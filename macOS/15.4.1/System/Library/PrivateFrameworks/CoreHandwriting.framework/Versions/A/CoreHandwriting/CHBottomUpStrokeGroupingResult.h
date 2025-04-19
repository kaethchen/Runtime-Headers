@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult

@property (readonly, nonatomic) NSDictionary *substrokePlacementsByStrokeIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)groupingResultUpdatedWithGroupReplacements:(id)a0;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2 substrokePlacementsByStrokeIdentifier:(id)a3;

@end
