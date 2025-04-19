@class NSString, WebBookmarkCollection, NSObject;
@protocol OS_dispatch_queue;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bookmarkWithID:(int)a0;
- (id)_collection;
- (id)bookmarksMatchingString:(id)a0;
- (id)databaseHealthInformation;
- (id)initReadonlySafariBookmarkCollection;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)a0;
- (id)leafChildCountForFoldersInFolderWithID:(int)a0;
- (id)readingListWithUnreadOnly:(BOOL)a0 filteredUsingString:(id)a1;

@end
