@class NSDictionary, NSMutableSet;

@interface CRTunableParameterManager : NSObject

@property (retain) NSDictionary *parametersDict;
@property (retain) NSMutableSet *overriddenKeyPaths;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_overrideDictionary:(id)a0 withParametersFromDictionary:(id)a1 currentKeyPath:(id)a2;
- (void)_processOverriddenKeyPath:(id)a0 withValue:(id)a1;
- (id)overrideDictionary:(id)a0 withParametersFromDictionaryAtKeyPath:(id)a1;
- (id)parameterDictionaryForKeyPath:(id)a0;
- (id)parameterForKeyPath:(id)a0;

@end
