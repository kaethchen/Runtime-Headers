@interface ABCNUnifiedContacts : NSObject

+ (BOOL)shouldIncludeLabeledValue:(id)a0 fromSource:(id)a1 inDestination:(id)a2 forProperty:(id)a3;
+ (void)correlateIdentifiersOfUnifiedMap:(id)a0 toIdentifiersOfMultiValueMap:(id)a1 intoMap:(id)a2 forProperty:(id)a3;
+ (unsigned long long)countOfLabel:(id)a0 value:(id)a1 inMultiValue:(id)a2 forProperty:(id)a3;
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)a0 value:(id)a1 inMultiValue:(id)a2 forProperty:(id)a3;
+ (unsigned long long)countOfLabelsEquivalentTo:(id)a0 valuesEquivalentTo:(id)a1 inMultiValue:(id)a2 forProperty:(id)a3;
+ (BOOL)doesMultiValue:(id)a0 needLabeledValue:(id)a1 fromMultiValue:(id)a2 forProperty:(id)a3;
+ (id /* block */)equivalentLabeledValueFilterForLabeledValue:(id)a0 property:(id)a1;
+ (id)findFirstIdentifier:(id)a0 inMultiValue:(id)a1;
+ (id)firstNonNilValueForProperty:(id)a0 inContacts:(id)a1;
+ (id)identifierMapForUnifiedContact:(id)a0 backingContacts:(id)a1;
+ (id)identifierMapForUnifiedMultiValue:(id)a0 backingMultiValues:(id)a1 forProperty:(id)a2;
+ (void)identifierMapForUnifiedMultiValue:(id)a0 backingMultiValues:(id)a1 intoMap:(id)a2 forProperty:(id)a3;
+ (unsigned long long)indexOfPreferredContactForUnifying:(id)a0;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)a0 onNonUnifiedMultiValue:(id)a1 withIdentifierMap:(id)a2;
+ (unsigned long long)indexOfValueMostInferiorTo:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (id)indexesOfLabeledValuesEquivalentTo:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (id)indexesOfValuesInferiorTo:(id)a0 inMultiValue:(id)a1 forProperty:(id)a2;
+ (BOOL)isLabel:(id)a0 equivalentToLabel:(id)a1 forProperty:(id)a2;
+ (BOOL)isLabeledValue:(id)a0 equivalentTo:(id)a1 forProperty:(id)a2;
+ (id)nonNameSingleValueProperties;
+ (void)replaceInferiorValueInMultiValue:(id)a0 withEntryAtIndex:(unsigned long long)a1 fromMultiValue:(id)a2 forProperty:(id)a3;
+ (BOOL)shouldLabeledValue:(id)a0 replaceInferiorValueInMultiValue:(id)a1 forProperty:(id)a2;
+ (id)unifiedIdentifiersForLabeledValue:(id)a0 inUnifiedMap:(id)a1 forProperty:(id)a2;
+ (id)unifiedIdentifiersForValue:(id)a0 inUnifiedMap:(id)a1 forProperty:(id)a2;
+ (id)unifyContacts:(id)a0 withPreferredContact:(id)a1;
+ (void)unifyMultiValue:(id)a0 intoMultiValue:(id)a1 forProperty:(id)a2;
+ (void)unifyMultiValuesOfContacts:(id)a0 intoContact:(id)a1;
+ (id)unifyMultivalues:(id)a0 forProperty:(id)a1;
+ (void)unifyNamesOfContacts:(id)a0 withPreferredContact:(id)a1 intoContact:(id)a2;
+ (void)unifyNonNameSingleValuesOfContacts:(id)a0 withPreferredContact:(id)a1 intoContact:(id)a2;
+ (void)unifySingleValuesProperties:(id)a0 ofContacts:(id)a1 intoContact:(id)a2;

@end
