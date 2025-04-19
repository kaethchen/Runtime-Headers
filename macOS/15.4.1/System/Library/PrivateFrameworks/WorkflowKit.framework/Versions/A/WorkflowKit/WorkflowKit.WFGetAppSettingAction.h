@class NSArray, WFContentCollection, INAppDescriptor, NSError, WFActionParameterSummary;

@interface WorkflowKit.WFGetAppSettingAction : WFAction <WFLinkActionProtocol> {
    void /* unknown type, empty encoding */ entityByEntityIdentifier;
    void /* unknown type, empty encoding */ fullyQualifiedActionIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$__localizedNameForEntityIdentifier;
}

@property (nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;
@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) NSArray *outputContentClasses;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) BOOL approvedForPublicShortcutsDrawer;

- (id)init;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)visibleForUse:(long long)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)backingActionIdentifiers;
- (void)configureParameter:(id)a0;
- (id)entityMetadataForIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 entityByEntityIdentifier:(id)a2 serializedParameters:(id)a3 fullyQualifiedActionIdentifier:(id)a4;
- (BOOL)isApprovedForPublicShortcutsDrawer;
- (id)localizedCategoryWithContext:(id)a0;

@end
