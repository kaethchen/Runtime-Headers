@interface PICompositionSerializerFormatVersion : NSObject

+ (id)currentFormatVersion;
+ (id)_versionRules;
+ (id)adjustmentDataFormatVersionForComposition:(id)a0;
+ (BOOL)adjustmentHasPerspective:(id)a0 settings:(id)a1;
+ (BOOL)adjustmentHasRetouchStyleCleanupOperations:(id)a0 settings:(id)a1;
+ (id)formatVersionForAdjustment:(id)a0 identifier:(id)a1;
+ (id)locallySupportedFormatVersions;
+ (id)versionRules;

@end
