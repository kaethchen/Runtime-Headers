@class NSArray, NSDictionary, ATXAppDirectoryCategory, ATXSuggestionLayout, ATXResponse, NSError;

@interface ATXAppDirectoryResponse : NSObject {
    NSDictionary *_bundleIdToSuggestionMapping;
}

@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *recentApps;
@property (readonly, nonatomic) ATXAppDirectoryCategory *hiddenAppsCategory;

- (void).cxx_destruct;
- (id)proactiveSuggestionForBundleId:(id)a0;
- (id)initWithResponse:(id)a0 recentApps:(id)a1 hiddenApps:(id)a2 otherAppsOnScreen:(id)a3 numAppsToPredict:(unsigned long long)a4 error:(id)a5;
- (id)initWithSuggestionLayout:(id)a0 recentApps:(id)a1 hiddenApps:(id)a2 otherAppsOnScreen:(id)a3 numAppsToPredict:(unsigned long long)a4 error:(id)a5;
- (id)initWithoutDedupingForRecents:(id)a0 predictedApps:(id)a1 hiddenApps:(id)a2 error:(id)a3;
- (id)uuidForBundleId:(id)a0;
- (id)uuidsForBundleIds:(id)a0;

@end
