@class NSString, NSSet, NSData, NSDictionary;

@interface BookmarkChange : NSObject

@property (readonly, nonatomic) int changeType;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *bookmarkUUID;
@property (readonly, nonatomic) long long bookmarkType;
@property (readonly, copy, nonatomic) NSString *bookmarkSyncServerID;
@property (readonly, nonatomic, getter=isMove) BOOL move;
@property (readonly, copy, nonatomic) NSSet *changedAttributes;
@property (copy, nonatomic) NSData *deletedBookmarkSyncData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)bookmarkMoveChangeWithBookmark:(id)a0;
+ (id)_bookmarkChangeWithBookmark:(id)a0 changeType:(int)a1;
+ (id)bookmarkAddChangeWithBookmark:(id)a0;
+ (id)bookmarkChangeWithDictionaryRepresentation:(id)a0;
+ (id)bookmarkDeleteChangeWithBookmark:(id)a0;
+ (id)bookmarkModifyChangeWithBookmark:(id)a0 changedAttributes:(id)a1;
+ (void)removeRedundantChangesInArray:(id)a0;
+ (void)sortChangesInArray:(id)a0 inBookmarkGroup:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithBookmarkChangeType:(int)a0 token:(id)a1 bookmarkUUID:(id)a2 bookmarkType:(long long)a3 bookmarkSyncServerID:(id)a4 deletedBookmarkSyncData:(id)a5;
- (id)bookmarkModifyChangeWithChangedAttributes:(id)a0;
- (id)bookmarkMoveChangeWithChangedAttributes:(id)a0;

@end
