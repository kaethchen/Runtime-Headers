@class NSString;

@interface VUIActionUpdateSportsFavorite : VUIAction {
    BOOL isFavorite;
    BOOL confirmsRemoval;
    BOOL firesBackgroundEvent;
}

@property (copy, nonatomic) NSString *sportsTeamID;
@property (copy, nonatomic) NSString *sportsTeamName;

+ (void)performFavoritesOperation:(BOOL)a0 teamId:(id)a1 teamName:(id)a2 confirmRemoval:(BOOL)a3 fireBackgroundEvent:(BOOL)a4 requestExecutionHandler:(id /* block */)a5;
+ (void)performFavoritesOperation:(BOOL)a0 teamId:(id)a1 teamName:(id)a2 requestExecutionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
