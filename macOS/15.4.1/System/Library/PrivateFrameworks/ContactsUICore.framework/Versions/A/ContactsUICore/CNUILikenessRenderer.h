@interface CNUILikenessRenderer : NSObject

+ (id)descriptorForRequiredKeys;
+ (id)cachingRendererWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1 schedulerProvider:(id)a2;
+ (id)cachingRendererWithLikenessResolver:(id)a0 schedulerProvider:(id)a1;
+ (id)concurrentCachingRendererWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1 schedulerProvider:(id)a2;
+ (id)descriptorForRequiredKeysForCaching;
+ (id)rendererWithLikenessResolver:(id)a0 schedulerProvider:(id)a1;

@end
