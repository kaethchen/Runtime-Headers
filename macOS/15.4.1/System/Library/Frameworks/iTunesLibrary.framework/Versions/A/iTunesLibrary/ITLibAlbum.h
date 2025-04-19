@class ITLibArtist, NSString, NSArray, ITLibGenre, NSDate, NSNumber, ITLibMediaItem;
@protocol ITLibAlbumDelegate;

@interface ITLibAlbum : NSObject {
    ITLibGenre *_genre;
    unsigned long long _audioTraits;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *sortTitle;
@property (nonatomic, getter=isCompilation) BOOL compilation;
@property (nonatomic) unsigned long long discCount;
@property (nonatomic) unsigned long long discNumber;
@property (nonatomic) long long rating;
@property (nonatomic, getter=isRatingComputed) BOOL ratingComputed;
@property (nonatomic, getter=isGapless) BOOL gapless;
@property (nonatomic) unsigned long long trackCount;
@property (copy, nonatomic) NSString *albumArtist;
@property (copy, nonatomic) NSString *sortAlbumArtist;
@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSNumber *representativeItemPersistentID;
@property (retain, nonatomic) NSNumber *subscriptionAdamID;
@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSArray *itemIDs;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *playableItems;
@property (retain, nonatomic) ITLibMediaItem *representativeItem;
@property (readonly, retain, nonatomic) NSDate *libraryAddedDate;
@property (readonly, retain, nonatomic) NSDate *lastPlayedDate;
@property (readonly, retain, nonatomic) NSDate *releaseDate;
@property (readonly, retain, nonatomic) NSString *artworkUUID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;
@property (retain, nonatomic) NSString *cloudAlbumID;
@property (weak, nonatomic) id<ITLibAlbumDelegate> albumDelegate;
@property (readonly, retain, nonatomic) ITLibArtist *artist;

+ (id)albumWithDict:(id)a0;

- (void).cxx_destruct;
- (id)genre;
- (id)artwork;
- (unsigned long long)albumTraits;

@end
