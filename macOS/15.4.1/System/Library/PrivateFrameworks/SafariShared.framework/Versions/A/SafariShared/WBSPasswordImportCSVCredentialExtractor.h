@class NSArray, WBSPasswordImportCSVHeaderChecker;

@interface WBSPasswordImportCSVCredentialExtractor : NSObject {
    WBSPasswordImportCSVHeaderChecker *_csvHeaderChecker;
    NSArray *_csvContents;
}

+ (id)credentialExtractionErrorForErrorCode:(long long)a0;

- (void).cxx_destruct;
- (id)_initWithCSVContents:(id)a0;
- (id)extractCredentialsWithError:(id *)a0;
- (id)initWithURLforCSVFile:(id)a0;
- (BOOL)looksLikePasswordsCSVFile;

@end
