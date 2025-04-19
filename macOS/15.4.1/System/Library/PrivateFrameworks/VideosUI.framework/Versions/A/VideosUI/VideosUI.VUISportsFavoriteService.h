@class _TtC8VideosUI17VUIFavoritesState, NSString, NSArray, _TtC8VideosUI26VUIUserConsentModification, NSError, _TtC8VideosUI19VUIUserConsentState;

@interface VideosUI.VUISportsFavoriteService : NSObject

@property (class, nonatomic, readonly) NSString *UserConsentDidChangeNotification;

+ (void)addFavoritesWithTeams:(NSArray *)a0 leagues:(NSArray *)a1 completionHandler:(void (^)(_TtC8VideosUI17VUIFavoritesState *, NSError *))a2;
+ (void)getFavoritesWithCompletionHandler:(void (^)(_TtC8VideosUI17VUIFavoritesState *, NSError *))a0;
+ (void)initializeSportsManager;
+ (void)modifyUserConsentWithModification:(_TtC8VideosUI26VUIUserConsentModification *)a0 completionHandler:(void (^)(_TtC8VideosUI19VUIUserConsentState *, NSError *))a1;
+ (void)removeFavoritesWithTeams:(NSArray *)a0 leagues:(NSArray *)a1 completionHandler:(void (^)(_TtC8VideosUI17VUIFavoritesState *, NSError *))a2;
+ (void)userConsentWithCompletionHandler:(void (^)(_TtC8VideosUI19VUIUserConsentState *, NSError *))a0;

- (id)init;
- (void).cxx_destruct;

@end
