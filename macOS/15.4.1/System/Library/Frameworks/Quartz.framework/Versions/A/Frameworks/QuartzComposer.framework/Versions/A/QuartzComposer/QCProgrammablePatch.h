@class NSMutableArray, NSMutableDictionary, GFList;

@interface QCProgrammablePatch : QCPatch {
    NSMutableDictionary *_sources;
    NSMutableDictionary *_compileStatus;
    GFList *_parameterTypes;
    NSMutableArray *_parameterPorts;
    GFList *_resultTypes;
    NSMutableArray *_resultPorts;
    void *_unused4[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (int)indicesType;
+ (BOOL)isKeyValid:(id)a0;
+ (Class)portClassFromParameterInfo:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)parameterList;
- (BOOL)_updateTypes:(id)a0 ports:(id)a1 list:(id)a2 direction:(int)a3;
- (id)attributesForParameterPortWithInfo:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (id)attributesForResultPortWithInfo:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (id)compileSourceOfType:(id)a0;
- (id)compileStatusForSourceOfType:(id)a0;
- (BOOL)isSourceType:(id)a0;
- (id)parameterPorts;
- (void)recompileSourceOfType:(id)a0;
- (id)resultList;
- (id)resultPorts;
- (BOOL)setParameterList:(id)a0;
- (BOOL)setResultList:(id)a0;
- (void)setSource:(id)a0 ofType:(id)a1;
- (id)sourceOfType:(id)a0;

@end
