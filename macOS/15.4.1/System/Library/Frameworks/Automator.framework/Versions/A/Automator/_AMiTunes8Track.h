@class NSString, NSDate;

@interface _AMiTunes8Track : _AMiTunes8Item

@property (copy) NSString *album;
@property (copy) NSString *albumArtist;
@property long long albumRating;
@property (readonly) int albumRatingKind;
@property (copy) NSString *artist;
@property (readonly) long long bitRate;
@property double bookmark;
@property BOOL bookmarkable;
@property long long bpm;
@property (copy) NSString *category;
@property (copy) NSString *comment;
@property BOOL compilation;
@property (copy) NSString *composer;
@property (readonly) long long databaseID;
@property (readonly, copy) NSDate *dateAdded;
@property (copy) NSString *objectDescription;
@property long long discCount;
@property long long discNumber;
@property (readonly) double duration;
@property BOOL enabled;
@property (copy) NSString *episodeID;
@property long long episodeNumber;
@property (copy) NSString *EQ;
@property double finish;
@property BOOL gapless;
@property (copy) NSString *genre;
@property (copy) NSString *grouping;
@property (readonly, copy) NSString *kind;
@property (copy) NSString *longDescription;
@property (copy) NSString *lyrics;
@property (readonly, copy) NSDate *modificationDate;
@property long long playedCount;
@property (copy) NSDate *playedDate;
@property (readonly) BOOL podcast;
@property long long rating;
@property (readonly) int ratingKind;
@property (readonly, copy) NSDate *releaseDate;
@property (readonly) long long sampleRate;
@property long long seasonNumber;
@property BOOL shufflable;
@property long long skippedCount;
@property (copy) NSDate *skippedDate;
@property (copy) NSString *show;
@property (copy) NSString *sortAlbum;
@property (copy) NSString *sortArtist;
@property (copy) NSString *sortAlbumArtist;
@property (copy) NSString *sortName;
@property (copy) NSString *sortComposer;
@property (copy) NSString *sortShow;
@property (readonly) long long size;
@property double start;
@property (readonly, copy) NSString *time;
@property long long trackCount;
@property long long trackNumber;
@property BOOL unplayed;
@property int videoKind;
@property long long volumeAdjustment;
@property long long year;

- (id)artworks;

@end
