@class NSDictionary, PKArchive;

@interface PKArchiveDistributionContainer : PKMutableDistributionContainer {
    PKArchive *_archive;
    NSDictionary *_lprojSubpathByName;
    NSDictionary *_strings;
}

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (BOOL)setStringsData:(id)a0 forLocalization:(id)a1;
- (id)_lprojSubpathByName;
- (id)_resourceDataForDirectoryPath:(id)a0 outUTI:(id *)a1;
- (id)_resourceDataForKey:(id)a0;
- (id)_resourcePathForKey:(id)a0 isDir:(BOOL *)a1;
- (id)initWithArchive:(id)a0 forWriting:(BOOL)a1 error:(id *)a2;
- (BOOL)setDistributionFromContainer:(id)a0;
- (BOOL)setResourceData:(id)a0 forKey:(id)a1 forLocalization:(id)a2;
- (id)stringsDictionary;

@end
