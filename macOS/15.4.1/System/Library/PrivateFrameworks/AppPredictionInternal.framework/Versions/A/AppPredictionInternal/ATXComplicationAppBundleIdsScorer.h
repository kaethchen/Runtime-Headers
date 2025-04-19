@class ATXWatchFaceConfigurationCollector, ATXComplicationSuggestionParameters, BMStream, ATXHomeScreenConfigCache;

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}

- (id)init;
- (void).cxx_destruct;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)_scoredComplicationBundleIdsForModularSet:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4 complicationBundleIdCountsOnWatch:(id)a5;
- (id)inputDescriptionForSignal:(id)a0 complicationAppBundleIds:(id)a1;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4;
- (id)scoredComplicationBundleIdsForModularSet:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;

@end
