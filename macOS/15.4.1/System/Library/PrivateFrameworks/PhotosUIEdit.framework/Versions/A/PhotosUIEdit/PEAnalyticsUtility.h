@interface PEAnalyticsUtility : NSObject

+ (id)adjustmentValueBucketizerFormatter;
+ (id)analyticPayloadForCompositionController:(id)a0;
+ (id)analyticPayloadForCopyEditsSettings:(id)a0;
+ (id)diffFromAdjustmentController:(id)a0 toAdjustmentController:(id)a1;
+ (id)diffKeysFromInitialComposition:(id)a0 toFinalComposition:(id)a1;
+ (void)reportAnalyticsForChangeFrom:(id)a0 to:(id)a1 actionType:(unsigned long long)a2;
+ (id)semanticStyleCapturedCastForItem:(id)a0;
+ (id)semanticStylesIdentifierForItem:(id)a0;

@end
