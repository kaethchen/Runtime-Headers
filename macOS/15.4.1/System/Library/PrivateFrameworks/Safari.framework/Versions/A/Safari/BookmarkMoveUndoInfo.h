@class NSString, NSMutableArray;

@interface BookmarkMoveUndoInfo : NSObject {
    NSMutableArray *_midMoveSourceBookmarkLocations;
}

@property (readonly) NSString *parentUUID;
@property (readonly) unsigned long long midMoveInitialIndex;

- (id)init;
- (void).cxx_destruct;
- (void)addMidMoveSourceBookmarkLocation:(id)a0;
- (id)initWithParentUUID:(id)a0 midMoveInitialIndex:(unsigned long long)a1;
- (id)midMoveSourceBookmarkLocations;

@end
