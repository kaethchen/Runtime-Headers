@class NSURL;

@interface FirefoxDataDirectories : BrowserDataDirectories {
    NSURL *_profileURL;
}

@property (readonly, nonatomic) NSURL *placesDatabaseURL;
@property (readonly, nonatomic) NSURL *keyDatabaseURL;
@property (readonly, nonatomic) NSURL *credentialJSONURL;
@property (readonly, nonatomic) NSURL *legacyCredentialDatabaseURL;
@property (readonly, nonatomic) NSURL *legacyKeyDatabaseURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activeProfileAttributesDictionary;
- (id)_activeProfileDirectoryURL;
- (Class)bookmarkImportEngineClass;
- (Class)credentialImporterClass;
- (Class)historyImporterClass;

@end
