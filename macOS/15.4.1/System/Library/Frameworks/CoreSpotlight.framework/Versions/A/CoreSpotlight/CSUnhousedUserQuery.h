@class NSString, CSSearchConnection;

@interface CSUnhousedUserQuery : CSUserQuery {
    NSString *_resolvedIndexPath;
}

@property (retain, nonatomic) NSString *indexPath;
@property (readonly, nonatomic) NSString *resolvedIndexPath;
@property (retain, nonatomic) CSSearchConnection *savedConnection;

+ (void)preheat:(id)a0 path:(id)a1;
+ (void)prepareProtectionClasses:(id)a0 path:(id)a1;
+ (void)prepareWithPath:(id)a0;

- (void).cxx_destruct;
- (id)connection;
- (void)start;
- (id)initWithPath:(id)a0 userQueryString:(id)a1 queryContext:(id)a2;
- (id)initWithPath:(id)a0 userQueryString:(id)a1 userQueryContext:(id)a2;
- (id)initWithUserAttributedQueryString:(id)a0 userQueryContext:(id)a1 path:(id)a2;
- (id)initWithUserQueryString:(id)a0 userQueryContext:(id)a1 path:(id)a2;
- (id)initialConnection;
- (void)updateRecentSuggestions:(id)a0 path:(id)a1;
- (void)userEngagedWithResult:(id)a0 visibleResults:(id)a1 interactionType:(int)a2 path:(id)a3;
- (void)userEngagedWithSuggestion:(id)a0 visibleSuggestions:(id)a1 interactionType:(int)a2 path:(id)a3;

@end
