@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (Class)contentItemClass;
- (id)overrideLabelsByParameter;
- (id)parameterSummary;
- (BOOL)deletesInput;
- (id)entityParameterName;
- (id)itemsBeingDeleted;
- (id)overrideEntityName;

@end
