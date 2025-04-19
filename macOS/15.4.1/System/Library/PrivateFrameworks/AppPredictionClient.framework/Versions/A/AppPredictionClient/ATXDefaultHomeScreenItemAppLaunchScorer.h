@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (void).cxx_destruct;
- (id)_appLaunchScoreForContactsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isAppPredictionsWidget;
- (BOOL)_isContactsWidget;
- (BOOL)_isSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (BOOL)isWidgetSpecialCase;
- (id)scoreWithCachedAppLaunchData:(id)a0;

@end
