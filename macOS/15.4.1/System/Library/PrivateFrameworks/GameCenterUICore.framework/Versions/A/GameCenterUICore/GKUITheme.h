@class NSCache, GKNetworkImageSource, NSImage;
@protocol GKUtilityService;

@interface GKUITheme : NSObject {
    NSCache *_resourceCache;
}

@property (readonly) id<GKUtilityService> utilityService;
@property (retain, nonatomic) NSCache *resourceCache;
@property (readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (readonly, retain, nonatomic) NSImage *ratingStarsBackgroundImage;
@property (readonly, retain, nonatomic) NSImage *ratingStarsForegroundImage;
@property (readonly, retain, nonatomic) NSImage *interactiveRatingStarsForeground;
@property (readonly, retain, nonatomic) NSImage *interactiveRatingStarsBackground;

+ (id)sharedTheme;
+ (id)resourceCache;
+ (id)themeForGame:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_catalogImageWithName:(id)a0 bundle:(id)a1;
- (id)imageNamed:(id)a0;
- (id)placeholderSourceWithDimension:(long long)a0;
- (id)secondaryLabelCompositingFilter;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)avatarSourceWithDimension:(long long)a0;
- (id)defaultPlayerPhoto;
- (id)eventIconImage;
- (id)groupImageSourceWithDimension:(long long)a0;
- (id)localImageSourceWithName:(id)a0 imageBrush:(id)a1;
- (id)monogramSourceWithDimension:(long long)a0;
- (id)networkImageSourceWithName:(id)a0 imageBrush:(id)a1;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)statusDotImage;
- (void)clearResourceCache;
- (id)contactsCircleImage;
- (id)defaultLeaderboardIcon;
- (id)messagesInviteBackgroundImage;
- (id)removePlayerButtonImage;
- (id)resourceForSelector:(SEL)a0 missingHandler:(id /* block */)a1;
- (id)resourceWithName:(id)a0 missingHandler:(id /* block */)a1;
- (BOOL)useStandardControls;

@end
