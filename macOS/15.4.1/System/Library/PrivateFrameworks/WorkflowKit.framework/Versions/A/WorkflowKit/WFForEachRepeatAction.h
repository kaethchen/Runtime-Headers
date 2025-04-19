@interface WFForEachRepeatAction : WFRepeatAction {
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (id)providedVariableNames;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (id)itemVariableName;
- (id)repeatCollectionWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)setRepeatCollection:(id)a0 withVariableSource:(id)a1;

@end
