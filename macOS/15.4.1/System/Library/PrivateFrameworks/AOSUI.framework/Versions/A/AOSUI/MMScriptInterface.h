@class _MMScriptInterfaceMetadata, Protocol;

@interface MMScriptInterface : NSObject

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) _MMScriptInterfaceMetadata *_metadata;
@property (nonatomic, getter=isCachingEnabledByDefault) BOOL cachingEnabledByDefault;

+ (id)interfaceWithProtocol:(id)a0;

- (void).cxx_destruct;
- (id)_blockArgumentIndicesForMethodSignature:(id)a0;
- (id)_blockWithSignature:(id)a0 passiveBlock:(id /* block */)a1;
- (BOOL)_cachingEnabledForSelector:(SEL)a0;
- (void)_decorateInvocation:(id)a0 withBlockForArgumentIndex:(unsigned long long)a1 passiveBlock:(id /* block */)a2;
- (id)_initWithProtocol:(id)a0;
- (id)_invocationsForMethodsSatisfyingRequired:(BOOL)a0 instance:(BOOL)a1;
- (id)_invocationsForOptionalClassMethods;
- (id)_invocationsForOptionalInstanceMethods;
- (id)_invocationsForRequiredClassMethods;
- (id)_invocationsForRequiredInstanceMethods;
- (BOOL)_isMethodSignatureVoid:(id)a0;
- (id)_methodSignatureForSelector:(SEL)a0 requiredMethod:(BOOL)a1 instanceMethod:(BOOL)a2;
- (id)_nameForSelector:(SEL)a0;
- (unsigned long long)_numberOfMethodsSatisfyingRequired:(BOOL)a0 instance:(BOOL)a1;
- (unsigned long long)_numberOfOptionalClassMethods;
- (unsigned long long)_numberOfOptionalInstanceMethods;
- (unsigned long long)_numberOfRequiredClassMethods;
- (unsigned long long)_numberOfRequiredInstanceMethods;
- (unsigned long long)_numberOfValidArgumentsForMethodSignature:(id)a0;
- (id)interfaceByAddingInterface:(id)a0;
- (id)interfaceByAddingInterfacesFromArray:(id)a0;
- (void)setCachingEnabled:(BOOL)a0 forSelector:(SEL)a1;
- (void)setName:(id)a0 forSelector:(SEL)a1;

@end
