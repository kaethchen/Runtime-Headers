@class NSNumber, ITLibMediaItem;

@interface ITLibPlaylistEntry : NSObject

@property (retain, nonatomic) ITLibMediaItem *mediaItem;
@property (retain, nonatomic) NSNumber *playlistEntryID;
@property (retain, nonatomic) NSNumber *position;

+ (id)entryWithAMPPlaylistEntry:(id)a0 mediaItem:(id)a1;

- (void).cxx_destruct;

@end
