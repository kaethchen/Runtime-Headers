@class NSArray, NSDictionary, INAppDescriptor, NSError, LNQueryOutput, WFActionParameterSummary;

@interface WorkflowKit.WFAppSettingUpdaterAction : WorkflowKit.WFEntityUpdatingAction {
    void /* unknown type, empty encoding */ entityByEntityIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sortedLocalizedNames;
    void /* unknown type, empty encoding */ $__lazy_storage_$__localizedNameForEntityIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sortedParameterIdentifiers;
}

@property (nonatomic, readonly) long long entityVisibility;
@property (nonatomic, readonly) long long propertyVisibility;
@property (nonatomic, readonly) NSDictionary *outputDictionary;
@property (nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) BOOL approvedForPublicShortcutsDrawer;
@property (nonatomic, readonly) NSArray *availableSubjectValues;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)visibleForUse:(long long)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (void)configureParameter:(id)a0;
- (void)finishRunningWith:(LNQueryOutput *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 actionMetadata:(id)a1 entityMetadataForParameterIdentifier:(id)a2 metadataForParameterIdentifier:(id)a3 definition:(id)a4 serializedParameters:(id)a5 appIntentDescriptor:(id)a6 fullyQualifiedActionIdentifier:(id)a7;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 metadataForParameterIdentifier:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (BOOL)isApprovedForPublicShortcutsDrawer;
- (id)localizedCategoryWithContext:(id)a0;

@end
