@class NSURL, NSMutableArray;

@interface CKDClonedFileCache : NSObject {
    NSURL *_cacheDirectory;
    unsigned long long _entryLimit;
    NSMutableArray *_entries;
}

- (void).cxx_destruct;
- (unsigned long long)entryCount;
- (void)prune;
- (id)cacheEntries;
- (id)cloneFileDescriptor:(int)a0 filename:(id)a1 error:(id *)a2;
- (id)cloneMMCSItem:(id)a0 error:(id *)a1;
- (id)filenameForMMCSItem:(id)a0;
- (id)initWithCacheDirectory:(id)a0 limit:(unsigned long long)a1;

@end
