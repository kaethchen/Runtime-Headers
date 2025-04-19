@class NSString, PKDistributionContainer, NSURL, NSDictionary, PKDistribution, NSArray;

@interface PKProduct : NSObject <PKPackageSource> {
    int _minTrustLevel;
    int _evaluatedTrustLevel;
    NSArray *_certificateChain;
    struct __SecTrust { } *_trustRef;
    BOOL _allowExpiredCerts;
    BOOL _allowExpiredRoots;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *productType;
@property (readonly) NSString *productIdentifier;
@property (readonly) NSString *productVersion;
@property (readonly) PKDistribution *distribution;
@property (readonly) PKDistributionContainer *distributionContainer;
@property (readonly) NSDictionary *stringsDictionary;
@property (readonly) NSArray *allPackageReferences;

+ (BOOL)canInitWithURL:(id)a0;
+ (id)productByLoadingProductAtURL:(id)a0 error:(id *)a1;
+ (id)_allProductClasses;
+ (BOOL)_allowsFolderArchives;
+ (void)_setAllowsFolderArchives:(BOOL)a0;

- (void)dealloc;
- (BOOL)evaluateTrustReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (void)setMinimumRequiredTrustLevel:(int)a0;
- (int)trustLevelReturningCertificateChain:(id *)a0;
- (id)_archiveForTrustEvaluation;
- (id)_distributionArchivePath;
- (id)_distributionFlatData;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)resourceDataForKey:(id)a0 returningMIMEType:(id *)a1 returningUTI:(id *)a2;
- (void)setAllowExpiredCertificates:(BOOL)a0;
- (void)setAllowExpiredRoots:(BOOL)a0;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)a0;

@end
