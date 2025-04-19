@class NSString, NSArray, NSDate, NSNumber, NSMutableArray;
@protocol ITLibPlaylistDelegate;

@interface ITLibPlaylist : ITLibMediaEntity {
    NSMutableArray *_items;
    NSMutableArray *_playableItems;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (retain, nonatomic) NSNumber *parentID;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) unsigned long long distinguishedKind;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) NSDate *addedDate;
@property (readonly, retain, nonatomic) NSArray *playableItems;
@property (retain, nonatomic) NSArray *itemIDs;
@property (weak, nonatomic) id<ITLibPlaylistDelegate> playlistDelegate;
@property (retain, nonatomic) NSString *globalID;
@property (retain, nonatomic) NSArray *ampPlaylistEntries;
@property (readonly, nonatomic, getter=isAllItemsPlaylist) BOOL allItemsPlaylist;
@property (readonly, retain, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isMaster) BOOL master;

+ (id)playlistWithDict:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (id)artwork;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)addMediaItem:(id)a0;
- (BOOL)containsMediaKind:(unsigned long long)a0;
- (void)enumerateValuesExceptForProperties:(id)a0 usingBlock:(id /* block */)a1;

@end
