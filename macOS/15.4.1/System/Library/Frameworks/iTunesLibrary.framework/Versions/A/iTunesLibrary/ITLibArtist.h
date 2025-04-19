@class NSString, NSArray, ITLibGenre, NSDate, NSNumber;
@protocol ITLibArtistDelegate;

@interface ITLibArtist : NSObject {
    ITLibGenre *_genre;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sortName;
@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSNumber *representativeItemPersistentID;
@property (readonly, retain, nonatomic) NSNumber *albumsCount;
@property (readonly, retain, nonatomic) NSDate *lastAddedDate;
@property (retain, nonatomic) NSArray *itemIDs;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *playableItems;
@property (readonly, retain, nonatomic) NSString *artworkUUID;
@property (retain, nonatomic) NSNumber *subscriptionAdamID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;
@property (retain, nonatomic) NSArray *albumIDs;
@property (readonly, retain, nonatomic) NSArray *albums;
@property (weak, nonatomic) id<ITLibArtistDelegate> artistDelegate;

+ (id)artistWithDict:(id)a0;

- (void).cxx_destruct;
- (id)genre;
- (id)artwork;

@end
