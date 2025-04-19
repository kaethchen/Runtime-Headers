@class NSString, NSDictionary, WLKPostPlayAutoPlaySettings;

@interface WLKUserSettings : NSObject <NSCopying>

@property (nonatomic) BOOL initWithFavoritesSync;
@property (nonatomic) BOOL initWithBrandSidebarSetting;
@property (nonatomic) BOOL initWithPostPlayAutoPlaySetting;
@property (nonatomic) unsigned long long postPlayAutoPlayType;
@property (retain, nonatomic) WLKPostPlayAutoPlaySettings *postPlayAutoPlaySettings;
@property (readonly, nonatomic) BOOL activeUser;
@property (readonly, nonatomic) BOOL ageVerified;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL favoritesSyncEnabled;
@property (readonly, nonatomic) BOOL recommendedItemsAutoPlayEnabled;
@property (readonly, nonatomic) BOOL nextEpisodeAutoPlayEnabled;
@property (readonly, nonatomic) BOOL globalAccountConsent;
@property (readonly, copy, nonatomic) NSDictionary *brandSidebarSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_patchData;
- (id)_patchJSONDictionary;
- (id)initWithBrandId:(id)a0 shouldHide:(BOOL)a1;
- (id)initWithFavoritesSyncEnabled:(BOOL)a0;
- (id)initWithPostPlayAutoPlaySettings:(id)a0;
- (id)initWithTabId:(id)a0 shouldPin:(BOOL)a1;

@end
