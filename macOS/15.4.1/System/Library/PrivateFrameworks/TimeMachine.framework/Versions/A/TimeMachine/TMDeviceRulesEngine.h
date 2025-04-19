@class NSSet, TMSpotlightOracle, NSArray, MDSPathFilter, TMDisk;

@interface TMDeviceRulesEngine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stickyExclusionCacheLock;
    struct _CFBurstTrie { } *_undiscoveredStickyExclusionCache;
}

@property (copy) NSSet *stickyExclusionPaths;
@property (readonly) TMDisk *disk;
@property (readonly) MDSPathFilter *baseFilter;
@property (readonly) MDSPathFilter *customExclusionsFilter;
@property (readonly) TMSpotlightOracle *spotlightOracle;
@property (readonly, copy) NSArray *neverEnumeratePaths;
@property (readonly) struct _TMRulesEngineStatistics { unsigned long long urlQueryCount; unsigned long long pathQueryCount; unsigned long long rawPathQueryCount; unsigned long long deviceIDFaults; unsigned long long isDirectoryFaults; unsigned long long contentsExcludedHits; unsigned long long fileContentsExcludedHits; unsigned long long spotlightMisses; unsigned long long stickyXattrFaults; } statistics;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDisk:(id)a0 baseFilter:(id)a1 customExclusionsFilter:(id)a2 spotlightOracle:(id)a3;
- (BOOL)URLIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (BOOL)URLIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 details:(struct _TMRulesQueryDetails { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; } *)a2;
- (BOOL)URLIsExcluded:(id)a0 isDir:(BOOL)a1;
- (BOOL)_cacheContainsRawPath:(const char *)a0 length:(unsigned long long)a1 isExcluded:(BOOL *)a2;
- (void)_dumpCache;
- (long long)_exclusionStatusForFilesystemRepresentation:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 details:(struct _TMRulesQueryDetails { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; } *)a2 error:(id *)a3;
- (void)_fillCachedExclusionAnswer:(BOOL)a0 forParentLevels:(unsigned int)a1 ofRawPath:(const char *)a2 length:(unsigned long long)a3;
- (void)_fillCachedExclusionAnswer:(BOOL)a0 forRawPath:(const char *)a1 length:(unsigned long long)a2;
- (BOOL)_rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 details:(struct _TMRulesQueryDetails { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; } *)a2;
- (BOOL)_rawPathIsFile:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)_undiscoveredStickyExclusionStatusForRawPath:(const char *)a0 filterRules:(struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a1 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a2 error:(id *)a3;
- (long long)exclusionStatusForFilesystemRepresentation:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 error:(id *)a2;
- (BOOL)pathIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (BOOL)pathIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 details:(struct _TMRulesQueryDetails { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; } *)a2;
- (BOOL)pathIsExcluded:(id)a0 isDir:(BOOL)a1;
- (BOOL)rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (BOOL)rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } *)a1 details:(struct _TMRulesQueryDetails { BOOL x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; } *)a2;
- (unsigned long long)realmForPath:(id)a0;
- (unsigned long long)realmForRawPath:(const char *)a0;
- (unsigned long long)realmForURL:(id)a0;

@end
