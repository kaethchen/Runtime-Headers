@interface CSUMLMultiArrayUtilities : NSObject

+ (id)copyFromNSDataAndReshape:(id)a0 shape:(id)a1;
+ (id)castToFP16WithDeepCopyFromTensor:(const void *)a0;
+ (BOOL)compareMLMultiArrayShapesForShape1:(id)a0 Shape2:(id)a1;
+ (id)deepCopyFromTensor:(const void *)a0;
+ (void)printMLMultiArray:(id)a0;
+ (id)reshapeMLMultiArray:(id)a0 toShape:(id)a1;
+ (id)shallowCopyFromTensor:(const void *)a0;

@end
