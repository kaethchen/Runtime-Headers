@class NSString;

@interface WorkflowKit.WFGetAccessibilitySettingAction : WorkflowKit.WFGetAppSettingAction

@property (nonatomic, readonly) NSString *iconSymbolName;
@property (nonatomic, readonly) NSString *iconBackgroundColorName;

- (id)localizedNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 entityByEntityIdentifier:(id)a2 serializedParameters:(id)a3 fullyQualifiedActionIdentifier:(id)a4;

@end
