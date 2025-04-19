@class NSInvocation, NSMutableDictionary;

@interface JSOCClosure : JSOCFunctionPointer {
    void *_closure;
}

@property (retain) NSInvocation *invocation;
@property (readonly, retain) NSMutableDictionary *userInfo;

+ (void *)staticPointerValueWithType:(id)a0 invocationBlock:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithThunk:(void /* function */ *)a0 type:(id)a1;
- (id)initWithType:(id)a0 invocationBlock:(id /* block */)a1;

@end
