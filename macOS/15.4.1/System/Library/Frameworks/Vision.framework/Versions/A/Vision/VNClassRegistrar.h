@interface VNClassRegistrar : NSObject

+ (BOOL)validateRequestClassName:(id)a0 error:(id *)a1;
+ (Class)classForClassCode:(unsigned int)a0 error:(id *)a1;
+ (id)classNameForClassCode:(unsigned int)a0 error:(id *)a1;
+ (unsigned char)entryTypeForClassCode:(unsigned int)a0;
+ (unsigned char)entryTypeForClassName:(id)a0;
+ (void)enumerateEntriesUsingBlock:(id /* block */)a0;
+ (BOOL)getClassCode:(unsigned int *)a0 forClass:(Class)a1 error:(id *)a2;
+ (BOOL)getClassCode:(unsigned int *)a0 forClassName:(id)a1 error:(id *)a2;
+ (BOOL)observationBoundsAreNormalizedToROIForRequestClassCode:(unsigned int)a0 revision:(unsigned long long)a1;

@end
