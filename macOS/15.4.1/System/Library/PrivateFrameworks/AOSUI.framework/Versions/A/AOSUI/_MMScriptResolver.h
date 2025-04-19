@class NSMutableSet;

@interface _MMScriptResolver : NSObject {
    id /* block */ _block;
    NSMutableSet *_tokens;
}

+ (id)_resolverWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_addToken:(id)a0;
- (void)_resolveWithToken:(id)a0 arguments:(id)a1;

@end
