@class NSString;

@interface PFCachingArchiveIndex : NSObject <PFCachingArchiveIndex> {
    BOOL _loaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexName;
- (id)dataArchivePath;
- (BOOL)indexFileValid:(const char *)a0;
- (unsigned int)architectureHash;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;
- (BOOL)createIndexFromArchiveFile:(id)a0 tempIndexFile:(id)a1;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (id)indexPath:(id *)a0;
- (BOOL)indexSupported;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (BOOL)loadOrCreateIndex;
- (BOOL)makeAndCacheIndexFileInDirectory:(id)a0 indexPath:(id)a1;

@end
