@class AMApplicationDefinition, NSMutableDictionary, NSArray;

@interface AMApplicationRegistry : NSObject

@property (class, readonly, nonatomic) AMApplicationRegistry *sharedApplicationRegistry;

@property (retain) NSMutableDictionary *definitionRegistry;
@property (retain) NSMutableDictionary *typeRegistry;
@property BOOL didLoadDeprecatedDefinitions;
@property (readonly, nonatomic) AMApplicationDefinition *definitionForMainBundle;
@property (readonly, nonatomic) NSArray *applicationNames;
@property (readonly, nonatomic) NSArray *applicationDefinitions;

+ (id)imagePathKeyForApplicationWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)loadDefinition:(id)a0;
- (id)_definitionURLsAtLocations:(id)a0 deprecatedOnly:(BOOL)a1;
- (void)_loadDefinitionsAtURLS:(id)a0;
- (void)_loadDeprecatedSystemDefinitions;
- (id)_systemLibraryURL;
- (id)definitionForApplicationName:(id)a0;
- (id)deprecatedSystemDefinitionLocations;
- (id)deprecatedSystemDefinitionURLs;
- (id)externalDefinitionURLs;
- (BOOL)loadDefinitionAtURL:(id)a0;
- (void)loadDeprecatedSystemDefinitionsIfNeeded;
- (void)loadNondeprecatedDefinitions;
- (id)nameForDefinedType:(id)a0;
- (void)setName:(id)a0 forDefinedType:(id)a1;
- (id)standardNondeprecatedDefinitionLocations;

@end
