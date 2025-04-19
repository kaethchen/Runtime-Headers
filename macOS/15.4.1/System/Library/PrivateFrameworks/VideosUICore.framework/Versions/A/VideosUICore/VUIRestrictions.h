@interface VUIRestrictions : NSObject <VUIRestrictions>

@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) BOOL allowsExplicitContent;

+ (id)sharedInstance;

@end
