@class SafariWebBookmarkList, SafariWebBookmark;

@interface BookmarkRemovalUndoInfo : NSObject

@property (readonly, retain, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, retain, nonatomic) SafariWebBookmarkList *parent;
@property (readonly, nonatomic) unsigned long long index;

+ (id)infoWithBookmark:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;

@end
