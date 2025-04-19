@interface TIMLog : NSObject

+ (BOOL)enabled;
+ (void)logWithLevel:(unsigned long long)a0 format:(id)a1;
+ (id)processNameForPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;

@end
