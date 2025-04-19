@class NSString, PKDistribution, SUProduct;

@interface SUManualProductAdopterImpl : NSObject {
    NSString *_archivePath;
    PKDistribution *_distribution;
    SUProduct *_adoptedProduct;
}

- (void)dealloc;
- (id)description;
- (BOOL)_mungeDistributionWithDisplayName:(id)a0 displayVersion:(id)a1 error:(id *)a2;
- (void)_mungePackageURLsUnderChoice:(id)a0;
- (id)_pathByCopyingProductArchiveFromFileHandle:(id)a0 archiveName:(id)a1;
- (BOOL)adoptWithDisplayName:(id)a0 displayVersion:(id)a1 allowDevSigning:(BOOL)a2 error:(id *)a3;
- (id)adoptedProduct;
- (id)initWithManualProductArchiveNamed:(id)a0 readingFromFileHandle:(id)a1 error:(id *)a2;

@end
