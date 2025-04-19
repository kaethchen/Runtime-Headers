@class ITMediaLibraryQuery, NSArray, NSString, __end_cap_, MPMediaQueryMutableSectionInfo, __end_;

@interface ITMediaLibraryQueryResultSet : NSObject <MPMediaLibraryResultSet> {
    struct vector<ITMediaEntity *, std::allocator<ITMediaEntity *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<ITMediaEntity *__strong *, std::allocator<ITMediaEntity *>> { id *__value_; } x1; } _results;
    MPMediaQueryMutableSectionInfo *_sectionInfo;
    BOOL _requestingCollection;
}

@property (readonly, nonatomic) ITMediaLibraryQuery *query;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithQuery:(id)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void)sortResults;
- (void)buildSectionInfo;
- (id)collectionOrderingPropertiesForGroupingType:(long long)a0;
- (void)enumerateSectionHeadersUsingBlock:(id /* block */)a0;
- (id)initWithQuery:(id)a0 isCollection:(BOOL)a1;
- (id)itemOrderingPropertiesForGroupingType:(long long)a0;
- (id)mediaItemAtIndex:(unsigned long long)a0;
- (id)mediaItemForIdentifier:(unsigned long long)a0;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (BOOL)updatePlaylistCollectionsToLibraryCurrentRevision;
- (BOOL)updateToLibraryCurrentRevision;
- (BOOL)updateToLibraryCurrentRevisionInternal;

@end
