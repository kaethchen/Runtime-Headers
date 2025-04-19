@class NSString;

@interface DataFileController : NSObject {
    unsigned int _builtInConditionerVersion;
    unsigned int _suppliedConditionerVersion;
    NSString *_suppliedConditionerPath;
    unsigned int _builtInArtistExceptionVersion;
    unsigned int _suppliedArtistExceptionVersion;
    NSString *_suppliedArtistExceptionPath;
    unsigned int _builtInLangModelsVersion;
    NSString *_unzippedBuiltInConditionerPath;
    NSString *_unzippedSuppliedConditionerPath;
}

+ (BOOL)unzipConditionerArchive:(id)a0 intoFolder:(id *)a1;

- (void)dealloc;
- (void)foundFile:(id)a0 ofType:(int)a1 version:(unsigned int)a2;
- (id)initWithConditionerFolderPath:(id)a0 artistExpceptionFolderPath:(id)a1;
- (id)pathToArtistExceptionFile:(unsigned int *)a0;
- (id)pathToConditionerFile:(unsigned int *)a0;
- (id)pathToLangModelsFile:(unsigned int *)a0;
- (id)rulesetLocaleDict:(unsigned int *)a0;
- (void)setFolderPath:(id)a0 forFileType:(int)a1;
- (BOOL)version:(unsigned int *)a0 forVoiceOverFolder:(id)a1 ofType:(int)a2;

@end
