@class Protocol;

@interface ABAPIAdapter : NSObject

@property (retain, nonatomic) id adaptedObject;
@property (retain, nonatomic) Protocol *localProtocol;
@property (retain, nonatomic) Protocol *remoteProtocol;
@property (nonatomic) BOOL hasCompletionHandler;

+ (id)methodSignatureForSelector:(SEL)a0 protocol:(id)a1;
+ (SEL)modifiedSelectorFromSeletor:(SEL)a0 numberOfArguments:(unsigned long long)a1 hasCompletionHandler:(BOOL)a2;
+ (id)remoteProtocolFromLocalProtocol:(id)a0 localProtocolIsAsync:(BOOL)a1;
+ (unsigned long long)typeEncodingFromReturnType:(const char *)a0;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithAdaptedObject:(id)a0 protocol:(id)a1 protocolIsAsync:(BOOL)a2;
- (id)completionBlockForInvocation:(id)a0 continuationHandler:(id /* block */)a1;
- (id /* block */)completionBlockForReturnType:(const char *)a0 invocation:(id)a1 untypedBlock:(void *)a2;
- (SEL)modifiedSelectorFromSeletor:(SEL)a0 numberOfArguments:(unsigned long long)a1;

@end
