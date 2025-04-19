@class CCRepeatedFloat, NSString, CCRepeatedInt64;

@interface CCPeopleSuggesterContactPriorContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) unsigned int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) unsigned int minVersion;
@property (nonatomic) BOOL hasMinVersion;
@property (readonly, nonatomic) CCRepeatedInt64 *sourceSharedIdentifier;
@property (readonly, nonatomic) CCRepeatedFloat *priorScore;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) double referenceDate;
@property (nonatomic) BOOL hasReferenceDate;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithVersion:(id)a0 minVersion:(id)a1 sourceSharedIdentifier:(id)a2 priorScore:(id)a3 modelName:(id)a4 modelVersion:(id)a5 referenceDate:(id)a6 error:(id *)a7;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
