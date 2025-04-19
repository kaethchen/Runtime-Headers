@interface CNVCardUserDefaults : NSObject

+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (long long)defaultNameOrdering;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includePhotosInVCards;
+ (id)vCardPrivateFields;
+ (BOOL)debugLogEnabled;
+ (id)vCard21Encoding;
+ (BOOL)includeUserSettings;
+ (BOOL)isPrivateVCardFieldsEnabled;

@end
