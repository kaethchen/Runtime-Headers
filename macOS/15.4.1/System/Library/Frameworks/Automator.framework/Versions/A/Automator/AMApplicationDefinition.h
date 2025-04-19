@class NSString, NSBundle, NSDictionary, NSArray, NSMutableArray;

@interface AMApplicationDefinition : NSObject <NSCopying> {
    BOOL _didLoadDefinedActions;
}

@property (readonly, nonatomic) BOOL isTigerDefinition;
@property (readonly, nonatomic) BOOL isLeopardDefinition;
@property (retain) NSBundle *bundle;
@property (retain) NSString *iconName;
@property (copy) NSString *applicationName;
@property (copy) NSString *localizedApplicationName;
@property (retain) NSDictionary *scripts;
@property (retain) NSArray *variables;
@property (retain) NSMutableArray *elements;
@property (retain) NSDictionary *registryTypes;
@property (retain, nonatomic) NSDictionary *definition;
@property (retain, nonatomic) NSArray *definedActions;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL isDeprecated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)allowedIdentifiers;
- (id)disallowedIdentifiers;
- (id)allowedApplicationNames;
- (id)dictionaryForElementName:(id)a0 key:(id)a1;
- (id)disallowedApplicationNames;
- (id)filterLibraryActions:(id)a0;
- (id)initWithDefinitionDictionary:(id)a0 bundle:(id)a1;
- (id)initWithDefinitionURL:(id)a0;
- (BOOL)initWithLeopardDefinition:(id)a0;
- (BOOL)initWithTigerDefinition:(id)a0;

@end
