@class NSString, GKGame;

@interface GKLocalizedAchievementDescription : GKAchievementDescription

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (void).cxx_destruct;
- (id)title;
- (id)_localizedStringFromKey:(id)a0;
- (id)achievedDescription;
- (id)imageNameForIcon;
- (id)unachievedDescription;

@end
