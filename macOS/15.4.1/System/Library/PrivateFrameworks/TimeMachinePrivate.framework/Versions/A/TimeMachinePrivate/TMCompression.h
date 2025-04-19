@interface TMCompression : NSObject

+ (BOOL)compressFile:(id)a0 error:(id *)a1;
+ (struct TMCMPInfo { int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })compressionInfoForURL:(id)a0;

@end
