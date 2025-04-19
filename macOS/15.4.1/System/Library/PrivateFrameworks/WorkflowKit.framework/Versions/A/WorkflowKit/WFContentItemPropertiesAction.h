@interface WFContentItemPropertiesAction : WFContentItemAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)localizedNameWithContext:(id)a0;
- (id)properties;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)parameterSummary;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)finishWithItems:(id)a0 property:(id)a1 coercionPerformed:(BOOL)a2;
- (id)selectedProperty;

@end
