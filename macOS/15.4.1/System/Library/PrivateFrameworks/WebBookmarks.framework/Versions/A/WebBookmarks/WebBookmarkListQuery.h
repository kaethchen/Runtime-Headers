@class NSString, NSArray;
@protocol WebBookmarkInMemoryChangeFilter;

@interface WebBookmarkListQuery : NSObject {
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSString *_orderBy;
    NSArray *_titleWordPrefixes;
    NSArray *_titleWordPrefixesForInMemoryFiltering;
    NSString *_urlFilter;
    BOOL _includeHidden;
    BOOL _countShouldUseNumChildrenIfPossible;
    BOOL _includeDescendantsAsChildren;
}

@property (readonly, nonatomic, getter=isCustomQuery) BOOL customQuery;
@property (readonly, nonatomic) int folderID;
@property (retain, nonatomic) id<WebBookmarkInMemoryChangeFilter> inMemoryFilter;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)a0 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)a1;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)a0 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)a1 countShouldUseNumChildrenIfPossible:(BOOL)a2;
- (id)_filterBookmarks:(id)a0;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)a0 collection:(id)a1 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)a2;
- (long long)_listQueryType;
- (id)_normalizeUserTypedString:(id)a0;
- (void)_preparePrefixesFromNormalizedString:(id)a0;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)a0 collection:(id)a1;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)a0 bookmarksInFolder:(int)a1 collection:(id)a2;
- (id)bookmarksInCollection:(id)a0 fromIndex:(unsigned int)a1 toIndex:(unsigned int)a2;
- (id)bookmarksInCollection:(id)a0 fromIndex:(unsigned int)a1 toIndex:(unsigned int)a2 skipDecodingSyncData:(BOOL)a3;
- (int)countInCollection:(id)a0;
- (id)initWithBookmarksWhere:(id)a0 folderID:(int)a1 orderBy:(id)a2 usingFilter:(id)a3;
- (id)initWithBookmarksWhere:(id)a0 orderBy:(id)a1 usingFilter:(id)a2;
- (id)initWithFolderID:(int)a0 inCollection:(id)a1 usingFilter:(id)a2 options:(unsigned long long)a3;

@end
