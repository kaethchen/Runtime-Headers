@class NSDictionary, PKDistribution, NSString;

@interface PKProductArchiver : NSObject {
    NSString *_productPath;
    id /* block */ _baselineNameMapper;
    id /* block */ _writeActionHandler;
}

@property (retain) NSDictionary *options;
@property BOOL copyOwnershipFromOriginalBom;
@property (retain) PKDistribution *overrideDistribution;
@property (copy) NSString *baselineUnarchivedProduct;
@property BOOL disableBinaryPatches;
@property (retain) NSString *archiverClientVersion;

- (void)dealloc;
- (BOOL)_writePackageAtPath:(id)a0 toArchive:(id)a1 atPath:(id)a2 outPackage:(id *)a3 error:(id *)a4;
- (BOOL)_writeScriptsAtPath:(id)a0 toArchive:(id)a1 atPath:(id)a2 error:(id *)a3;
- (id)initWithUnarchivedProduct:(id)a0;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)a0;
- (void)setWriteActionHandler:(id /* block */)a0;
- (BOOL)writeToArchive:(id)a0 error:(id *)a1;

@end
