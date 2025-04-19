@interface EspressoFileUtils : NSObject

+ (struct EspressoTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })createEspressoTensorFromTextFile:(id)a0 channels:(unsigned long long)a1 height:(unsigned long long)a2 width:(unsigned long long)a3;
+ (void)writeEspressoBufferToBinFile:(id)a0 FromBuffer:(id)a1;
+ (void)writeEspressoBufferToTextFile:(id)a0 FromBuffer:(id)a1;
+ (void)writeIKFloatTensorBuffer:(const void *)a0 ToBinFile:(id)a1;

@end
