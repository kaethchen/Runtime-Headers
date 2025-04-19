@interface WBSWebExtensionUtilities : NSObject

+ (BOOL)isProfileServerIDForDefaultProfile:(id)a0;
+ (double)nextTabID;
+ (double)nextWindowID;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)a0;
+ (id)serializeObjectToJSON:(id)a0;
+ (double)storageSizeForKeyOrValue:(id)a0;
+ (double)storageSizeForKeysAndValues:(id)a0;
+ (BOOL)validateContentsOfDictionary:(id)a0 requiredKeys:(id)a1 optionalKeys:(id)a2 keyToExpectedValueType:(id)a3 outExceptionString:(id *)a4;

@end
