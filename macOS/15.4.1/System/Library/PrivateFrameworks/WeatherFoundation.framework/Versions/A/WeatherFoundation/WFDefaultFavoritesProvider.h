@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>

@property (weak, nonatomic) id<WFFavoriteLocationProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setLocations:(id)a0;
- (id)locations;
- (void)addLocation:(id)a0;
- (void)removeLocation:(id)a0;
- (BOOL)canProvideDefaultFavorites;
- (id)initWithDelegate:(id)a0 persistence:(id)a1;

@end
