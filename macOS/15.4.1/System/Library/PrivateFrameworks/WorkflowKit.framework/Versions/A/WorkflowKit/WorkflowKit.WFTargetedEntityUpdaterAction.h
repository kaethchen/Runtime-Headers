@class NSArray;

@interface WorkflowKit.WFTargetedEntityUpdaterAction : WorkflowKit.WFEntityUpdatingAction {
    void /* unknown type, empty encoding */ _entityMetadata;
    void /* unknown type, empty encoding */ $__lazy_storage_$_propertyByIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$__localizedNameForParameterKey;
}

@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) BOOL approvedForPublicShortcutsDrawer;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (BOOL)visibleForUse:(long long)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 actionMetadata:(id)a1 entityMetadata:(id)a2 metadataForParameterIdentifier:(id)a3 definition:(id)a4 serializedParameters:(id)a5 appIntentDescriptor:(id)a6 fullyQualifiedActionIdentifier:(id)a7;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 metadataForParameterIdentifier:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (BOOL)isApprovedForPublicShortcutsDrawer;
- (id)localizedCategoryWithContext:(id)a0;

@end
