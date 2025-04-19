@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;

@end
