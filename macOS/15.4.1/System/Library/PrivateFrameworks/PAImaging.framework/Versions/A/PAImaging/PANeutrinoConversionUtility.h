@interface PANeutrinoConversionUtility : NSObject

+ (id)_compositionToDescriptionMap;
+ (id)_descriptionToCompositionMap;
+ (id)_generateCompositionToDescriptionMap;
+ (id)_generateDescriptionToCompositionMap;
+ (id)adjustmentForOperation:(id)a0 isForRAW:(BOOL)a1 autoSettingsStorage:(id)a2;
+ (id)compositionKeyForOperationIdentifier:(id)a0;
+ (id)operationForAdjustment:(id)a0 isForRAW:(BOOL)a1 autoSettingsStorage:(id)a2;
+ (id)operationIdentifierForAdjustmentIdentifier:(id)a0;
+ (void)testConversionOnOperation:(id)a0 isForRAW:(BOOL)a1;
+ (void)testConversionOnOperations:(id)a0 isForRAW:(BOOL)a1;

@end
