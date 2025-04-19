@interface IOKitUtilities : NSObject

+ (int)arrayForRegistryEntry:(unsigned int)a0 andKey:(id)a1 outValue:(id *)a2;
+ (int)isRegistryEntry:(unsigned int)a0 descendentOfRegistryEntry:(unsigned int)a1 outValue:(BOOL *)a2;
+ (int)uint32ForRegistryEntry:(unsigned int)a0 andKey:(id)a1 outValue:(unsigned int *)a2;
+ (int)uint64ForRegistryEntry:(unsigned int)a0 andKey:(id)a1 outValue:(unsigned long long *)a2;

@end
