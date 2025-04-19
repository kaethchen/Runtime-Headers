@interface PKLeopardPackage : PKPackage

- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)payloadExtractorWithDestination:(id)a0 externalRoot:(id)a1 error:(id *)a2;
- (id)BOMData;
- (id)_archiveSubpathWithFileName:(id)a0;
- (BOOL)_payloadLargeAndSegmented;
- (id)_payloadPathWithOutputPayloadOffset:(unsigned long long *)a0 payloadSize:(unsigned long long *)a1 isLargeAndSegmented:(BOOL *)a2 withError:(id *)a3;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteFilesOrRecursiveDirectories;
- (id)_staticObsoleteListAtRelativeSubpath:(id)a0;
- (id)packageType;
- (unsigned long long)redeemableHolePunchSpace;
- (id)scriptsExtractorWithDestination:(id)a0 error:(id *)a1;
- (id)scriptsSubpath;

@end
