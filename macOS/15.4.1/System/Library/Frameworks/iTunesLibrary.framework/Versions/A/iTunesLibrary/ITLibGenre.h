@class NSString, NSArray, NSDate, NSNumber;
@protocol ITLibGenreDelegate;

@interface ITLibGenre : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *catalogID;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSDate *libraryAddedDate;
@property (retain, nonatomic) NSArray *albumIDs;
@property (retain, nonatomic) NSArray *localAlbumIDs;
@property (readonly, retain, nonatomic) NSArray *albums;
@property (readonly, retain, nonatomic) NSArray *localAlbums;
@property (weak, nonatomic) id<ITLibGenreDelegate> genreDelegate;

+ (id)genreWithDict:(id)a0;
+ (id)emptyGenre;

- (id)description;
- (void).cxx_destruct;

@end
