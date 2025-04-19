@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (Class)effectClass;
+ (Class)materialEffectClass;

- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
