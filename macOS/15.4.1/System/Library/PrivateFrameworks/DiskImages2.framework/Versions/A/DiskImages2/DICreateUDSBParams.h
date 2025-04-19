@interface DICreateUDSBParams : DICreateParams

@property (nonatomic) unsigned long long sparseBundleBandSize;

+ (BOOL)checkExistingFileWithURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;

- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (void)createDiskImageParamsXPC;

@end
