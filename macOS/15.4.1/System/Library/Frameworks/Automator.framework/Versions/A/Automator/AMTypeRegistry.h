@class AMType, NSDictionary, NSMutableDictionary, NSArray;

@interface AMTypeRegistry : NSObject

@property (class, readonly) AMTypeRegistry *sharedTypeRegistry;

@property (retain) AMType *nothingType;
@property (retain) AMType *unknownType;
@property (copy, nonatomic) NSDictionary *categorizedBasicTypes;
@property (copy, nonatomic) NSDictionary *typesByHeaderInputType;
@property (retain) NSDictionary *categorizedCustomApplicationTypes;
@property (retain, nonatomic) NSMutableDictionary *_typesByAutomatorIdentifier;
@property (retain) NSArray *basicTypes;
@property (retain) NSArray *customApplicationTypes;
@property (readonly, nonatomic) NSDictionary *typesByAutomatorIdentifier;
@property (readonly, nonatomic) NSArray *orderedCategoryIdentifiers;
@property (readonly, nonatomic) NSArray *appBundleIDsDeclaringTypes;

- (id)init;
- (void).cxx_destruct;
- (id)_internalCustomApplicationTypes;
- (id)_organizeTypesByHeaderInputType;
- (void)_registerTypes:(id)a0;
- (id)_automaticallyGuessedInputTypeForActionInputTypes:(id)a0 allowNothingType:(BOOL)a1;
- (id)_basicTypes;
- (id)_categorizeBasicTypes:(id)a0;
- (id)_categorizeCustomApplicationTypes:(id)a0;
- (id)_customApplicationTypes;
- (void)_generateTypesIfNeeded;
- (void)_registerType:(id)a0;
- (id)humanReadableNameForObject:(id)a0 delimiter:(id)a1;
- (id)imageRepresentationForObject:(id)a0;
- (id)imageRepresentationTypeForObject:(id)a0;
- (id)orderedTypesIncludingApplicationIdentifier:(id)a0 includeNothing:(BOOL)a1 includeUnkown:(BOOL)a2;
- (id)typeWithAutomatorIdentifier:(id)a0;
- (id)typesForApplicationWithBundleIdentifier:(id)a0;

@end
