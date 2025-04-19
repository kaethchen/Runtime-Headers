@class NSObject, NSMutableDictionary, DefaultUIHelper;

@interface ISyncConcreteUIHelperProxy : ISyncUIHelperProxy {
    NSMutableDictionary *_cachedUIHelpersForClassNames;
    NSMutableDictionary *_cachedUIHelpersForEntities;
    NSMutableDictionary *_cachedUIHelpersForProperties;
    DefaultUIHelper *_defaultUIHelper;
    NSObject *_testUIHelper;
}

- (void)dealloc;
- (id)init;
- (id)labelTextAttributes;
- (id)uiHelperForEntityName:(id)a0;
- (id)uiHelperForPropertyName:(id)a0 onEntityName:(id)a1;
- (id)normalTextAttributes;
- (id)attributedStringForRecordNode:(id)a0 propertyName:(id)a1 withComparisonNodes:(id)a2;
- (id)attributedStringForRecordNode:(id)a0 dependentPropertyNames:(id)a1 withComparisonNodes:(id)a2;
- (id)attributedStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)attributedStringLabelForRecordNode:(id)a0 propertyName:(id)a1 withComparisonNodes:(id)a2;
- (id)bundleCallWrapper:(void /* function */ *)a0 context:(struct WrapperStruct { id x0; SEL x1; Class x2; id x3; id x4; id x5; id x6; id x7; id x8; } *)a1;
- (id)bundleCallWrapperIgnoringDefaultUIHelper:(void /* function */ *)a0 context:(struct WrapperStruct { id x0; SEL x1; Class x2; id x3; id x4; id x5; id x6; id x7; id x8; } *)a1;
- (id)changedTextAttributes;
- (id)changedTextColor;
- (id)childNodeSeparatorAttributedString;
- (id)identitySeparatorAttributedString;
- (id)identityStringFirstLineAttributes;
- (id)identityStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)identityStringIgnoringDefaultUIHelperForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)identityStringSecondLineAttributes;
- (id)initWithTestUIHelper:(id)a0;
- (id)labelTextSeparator;
- (id)orderedPropertyNamesForPropertyNames:(id)a0 forRecordNode:(id)a1 withComparisonNodes:(id)a2;
- (id)relationshipIdentityStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)removeLabelObject;
- (void)setDefaultUIHelper:(id)a0;
- (id)uiHelperForClassName:(id)a0;
- (id)uiHelperForPropertyNames:(id)a0 onEntityName:(id)a1;

@end
