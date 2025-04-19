@protocol LNValueMetadata;

@interface WFLinkEntityAction : WFOverridableLinkAction

@property (readonly, nonatomic) BOOL isUniqueEntity;
@property (readonly, nonatomic) id<LNValueMetadata> entityMetadata;

- (id)entityName;
- (id)actualEntityParameterNameFromPossibleNames:(id)a0;
- (id)entityParameterMetadata;
- (id)entityParameterName;
- (id)overrideEntityName;
- (Class)overrideTypeDescriptions;

@end
