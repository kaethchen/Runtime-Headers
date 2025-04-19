@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXWidgetModeEntityModelWeights : NSObject {
    NSDictionary *_widgetModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (double)classConditionalProbability;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)weightForWidgetProbability;

@end
