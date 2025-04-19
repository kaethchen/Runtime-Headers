@class PKDistributionContainer, NSMutableDictionary, PKArchive, NSString;

@interface PKArchiveProduct : PKMutableProduct {
    PKArchive *_archive;
    PKDistributionContainer *_container;
    NSMutableDictionary *_packageIdentifierToURLMap;
    NSString *_productIdentifier;
    NSString *_productVersion;
    NSString *_scriptsPath;
    NSString *_installerPluginsPath;
}

+ (BOOL)canInitWithURL:(id)a0;

- (void)dealloc;
- (id)URL;
- (BOOL)commitReturningError:(id *)a0;
- (id)distribution;
- (BOOL)setDistribution:(id)a0;
- (id)productVersion;
- (id)productType;
- (id)productIdentifier;
- (id)allPackageReferences;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)_archiveForTrustEvaluation;
- (id)_identifierVersionTuple:(id)a0;
- (id)_initWithPath:(id)a0 error:(id *)a1;
- (void)_setInstallerPluginsPath:(id)a0;
- (void)_setScriptsPath:(id)a0;
- (BOOL)_writeCompressedCPIOForRoot:(id)a0 intoArchivePath:(id)a1 largeAndSegmented:(BOOL)a2 error:(id *)a3;
- (BOOL)addResourceDataAtPath:(id)a0;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)initForWritingToArchive:(id)a0 signingDelegate:(id)a1 error:(id *)a2;
- (BOOL)registerPackageReference:(id)a0;
- (BOOL)setDistributionFromContainer:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (id)stringsDictionary;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (BOOL)unregisterPackageReference:(id)a0 deletePackage:(BOOL)a1;

@end
