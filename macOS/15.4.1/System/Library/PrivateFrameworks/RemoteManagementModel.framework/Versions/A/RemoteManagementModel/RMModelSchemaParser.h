@interface RMModelSchemaParser : NSObject

+ (id)_parseVariants:(id)a0;
+ (long long)_enrollmentTypeFromString:(id)a0;
+ (id)_parseEnrollmentTypes:(id)a0;
+ (id)_parseScopes:(id)a0;
+ (long long)_platformFromString:(id)a0;
+ (long long)_scopeFromString:(id)a0;
+ (long long)_variantFromString:(id)a0;
+ (id)loadSupportedOSFromDictionary:(id)a0 allowEmptyOS:(BOOL)a1;

@end
