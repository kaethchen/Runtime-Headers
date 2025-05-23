@interface IMSingletonProxy : NSProxy {
    id _singleton;
    id _singletonOverride;
    Class _overrideClass;
}

+ (void)initialize;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)__isSingletonProxy__im;
- (id)initWithSingleton:(id)a0 singletonOverride:(id)a1;
- (void)setSingletonOverride:(id)a0;
- (id)singletonOverrideRef;
- (id)singletonRef;

@end
