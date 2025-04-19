@class NSString;

@interface WorkflowKit.WFAccessibilitySettingUpdaterAction : WorkflowKit.WFAppSettingUpdaterAction

@property (nonatomic, readonly) NSString *iconSymbolName;
@property (nonatomic, readonly) NSString *iconBackgroundColorName;

- (id)localizedNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 actionMetadata:(id)a1 entityMetadataForParameterIdentifier:(id)a2 metadataForParameterIdentifier:(id)a3 definition:(id)a4 serializedParameters:(id)a5 appIntentDescriptor:(id)a6 fullyQualifiedActionIdentifier:(id)a7;

@end
