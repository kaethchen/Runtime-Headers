@class NSArray, NSMutableArray;

@interface _MMCompoundScriptInterface : MMScriptInterface {
    NSMutableArray *_stagedInterfaces;
    NSArray *_unstagedInvocations;
}

+ (id)_compoundInterface;

- (void).cxx_destruct;
- (void)_addCompoundInterface:(id)a0;
- (void)_addInterface:(id)a0;
- (void)_addUnstagedInvocationsFromInterface:(id)a0 satisfyingRequired:(BOOL)a1 instance:(BOOL)a2;
- (BOOL)_cachingEnabledForSelector:(SEL)a0;
- (void)_enumerateAllMethodsForProtocol:(id)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateMethodsForProtocol:(id)a0 satisfyingRequired:(BOOL)a1 instance:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)_initWithProtocol:(id)a0;
- (id)_invocationsForMethodsSatisfyingRequired:(BOOL)a0 instance:(BOOL)a1;
- (id)_nameForSelector:(SEL)a0;
- (unsigned long long)_numberOfMethodsSatisfyingRequired:(BOOL)a0 instance:(BOOL)a1;
- (void)_stageInterface:(id)a0;
- (void)_unstageAllInterfaces;
- (void)_unstageInterface:(id)a0;
- (id)_unstagedInvocationsSatisfyingRequired:(BOOL)a0 instance:(BOOL)a1;
- (id)interfaceByAddingInterface:(id)a0;
- (void)setCachingEnabled:(BOOL)a0 forSelector:(SEL)a1;
- (void)setName:(id)a0 forSelector:(SEL)a1;

@end
