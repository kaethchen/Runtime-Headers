@class NSURL;

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}

- (id)name;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (id)productKind;
- (BOOL)canReference;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (BOOL)isLibrary;
- (BOOL)isReadonlyVolume;
- (void)loadSidecarsFor:(id)a0;

@end
