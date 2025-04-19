@interface PGHeapResource : PGResource

+ (id)newHeapResourceWithTask:(id)a0 objectType:(int)a1 descriptor:(const void *)a2 descriptorLength:(unsigned int)a3 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a4;
+ (id)newNormalHeapResourceWithTask:(id)a0 descriptor:(const void *)a1 descriptorLength:(unsigned int)a2 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a3;

@end
