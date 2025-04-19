@interface MCMContainerClassTransientPath : MCMContainerClassPath

+ (id)_globalTemporaryComponent;
+ (id)_temporaryComponent;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)transientGlobalBundleURL;
+ (id)transientGlobalURL;
+ (id)transientURLWithUserIdentity:(id)a0 withContainerClass:(unsigned long long)a1;

@end
