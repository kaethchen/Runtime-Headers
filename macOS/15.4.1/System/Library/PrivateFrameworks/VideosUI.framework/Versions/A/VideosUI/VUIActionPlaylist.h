@class VUIAppContext, NSArray, NSDictionary, NSString;

@interface VUIActionPlaylist : VUIAction

@property (retain, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSArray *videosPlayable;
@property (readonly, nonatomic) unsigned long long index;
@property (retain, nonatomic) NSDictionary *collectionViewModel;
@property (retain, nonatomic) NSArray *clipItems;
@property (retain, nonatomic) NSArray *metadataViewModels;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic) NSString *nextToken;
@property (readonly, nonatomic) NSString *trailerEndpoint;

- (void).cxx_destruct;
- (void)_presentViewController:(id /* block */)a0;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)_maxContentRating;
- (id)_ratingDomain;
- (id)_ratingValue;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
