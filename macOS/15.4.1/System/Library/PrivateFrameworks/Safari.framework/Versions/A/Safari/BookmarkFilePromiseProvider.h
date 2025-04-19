@class NSString, SafariWebBookmark, NSArray;

@interface BookmarkFilePromiseProvider : NSFilePromiseProvider <NSFilePromiseProviderDelegate> {
    SafariWebBookmark *_bookmark;
    NSArray *_collection;
    BOOL _collectionContainsList;
    BOOL _collectionContainsLeaf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promisesForBookmarks:(id)a0;

- (void).cxx_destruct;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)_internalQueue;
- (id)_firstLeaf;
- (BOOL)_isBookmarkFirstObjectInCollection;
- (id)initWithBookmark:(id)a0 collection:(id)a1;

@end
