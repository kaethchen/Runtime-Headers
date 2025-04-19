@interface NSScriptCoercionHandler : NSObject {
    id _coercers;
}

+ (id)sharedCoercionHandler;

- (void)dealloc;
- (id)init;
- (id)_findCoercerFromClass:(Class)a0 toClass:(Class)a1;
- (void)_setUpFoundationCoercions;
- (id)coerceValue:(id)a0 toClass:(Class)a1;
- (void)registerCoercer:(id)a0 selector:(SEL)a1 toConvertFromClass:(Class)a2 toClass:(Class)a3;

@end
