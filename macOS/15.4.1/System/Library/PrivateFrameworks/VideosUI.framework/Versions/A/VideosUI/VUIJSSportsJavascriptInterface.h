@class NSString;

@interface VUIJSSportsJavascriptInterface : NSObject {
    void /* unknown type, empty encoding */ tierManagerClientType;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ context;
@property (nonatomic, readonly) NSString *storefrontId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)checkActivityExistsFor:(id)a0;
- (id)getTierTypeWithLeagueId:(id)a0;
- (id)isPlayByPlayEnabledWithLeagueId:(id)a0;
- (id)isSportsFeatureEnabledWithLeagueId:(id)a0 featureName:(id)a1;
- (void)registerWithRequest:(id)a0 successHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
