@class NSDictionary, NSArray, NSScriptClassDescription, NSMutableSet, NSScriptCommandDescription, NSMutableArray, NSMutableDictionary;

@interface NSScriptSuiteRegistry : NSObject {
    BOOL _isLoadingSDEFFiles;
    BOOL _isLoadingSecurityOverride;
    BOOL _hasLoadedIntrinsics;
    char _reserved1[1];
    NSMutableSet *_seenBundles;
    NSMutableArray *_suiteDescriptionsBeingCollected;
    NSScriptClassDescription *_classDescriptionNeedingRegistration;
    NSMutableArray *_suiteDescriptions;
    NSScriptCommandDescription *_commandDescriptionNeedingRegistration;
    NSMutableDictionary *_cachedClassDescriptionsByAppleEventCode;
    NSMutableDictionary *_cachedCommandDescriptionsByAppleEventCodes;
    NSDictionary *_cachedSuiteDescriptionsByName;
    NSMutableDictionary *_complexTypeDescriptionsByName;
    NSMutableDictionary *_listTypeDescriptionsByName;
    unsigned int _nextComplexTypeAppleEventCode;
    void *_reserved2[4];
}

@property (readonly, copy) NSArray *suiteNames;

+ (void)initialize;
+ (BOOL)_isScriptingEnabled;
+ (void)_loadScriptSuites;
+ (void)setSharedScriptSuiteRegistry:(id)a0;
+ (id)sharedScriptSuiteRegistry;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_loadSuitesForJustLoadedBundle:(id)a0;
- (void)_loadSuitesFromSDEFData:(id)a0 bundle:(id)a1;
- (id)_objectSpecifierTypeDescription;
- (id)bundleForSuite:(id)a0;
- (id)_aeteDataForAllSuites;
- (unsigned long long)_appendTypeDefinitionsSuiteDeclarationToAETEData:(id)a0;
- (unsigned long long)_appendTypeNamesSuiteDeclarationToAETEData:(id)a0;
- (id)_classDescriptionForName:(id)a0;
- (id)_classDescriptionForName:(id)a0 suiteName:(id)a1 isValid:(BOOL *)a2;
- (id)_complexTypeDescriptions;
- (id)_initWithSDEFData:(id)a0 otherAppBundle:(id)a1;
- (BOOL)_isLoadingSDEFFiles;
- (id)_listTypeDescriptions;
- (void)_loadIntrinsicScriptingDefinitions;
- (void)_loadSuiteDescription:(id)a0;
- (void)_loadSuitesForAlreadyLoadedBundles;
- (void)_loadSuitesForSecurityOverride;
- (id)_newRegisteredSuiteDescriptionForName:(id)a0;
- (id)_objectTypeDescriptionForClassAppleEventCode:(unsigned int)a0 isValid:(BOOL *)a1;
- (void)_registerOrCollectSuiteDescription:(id)a0;
- (void)_registerSuiteDescriptions:(id)a0;
- (id)_subclassDescriptionsForDescription:(id)a0;
- (id)_suiteDescriptions;
- (id)_suiteDescriptionsByName;
- (id)_typeDescriptionForAppleEventCode:(unsigned int)a0;
- (id)_typeDescriptionForName:(id)a0;
- (id)_typeDescriptionForName:(id)a0 suiteName:(id)a1 isValid:(BOOL *)a2;
- (id)aeteResource:(id)a0;
- (unsigned int)appleEventCodeForSuite:(id)a0;
- (id)classDescriptionWithAppleEventCode:(unsigned int)a0;
- (id)classDescriptionsInSuite:(id)a0;
- (id)commandDescriptionWithAppleEventClass:(unsigned int)a0 andAppleEventCode:(unsigned int)a1;
- (id)commandDescriptionsInSuite:(id)a0;
- (void)loadSuiteWithDictionary:(id)a0 fromBundle:(id)a1;
- (void)loadSuitesFromBundle:(id)a0;
- (void)registerClassDescription:(id)a0;
- (void)registerCommandDescription:(id)a0;
- (id)suiteForAppleEventCode:(unsigned int)a0;

@end
