@class ATXUIFeedbackMetricsResultSection, ATXTrendPlot;

@interface ATXUIFeedbackMetricsResult : NSObject

@property (readonly, nonatomic) ATXTrendPlot *trendPlot;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForShownSuggestions;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForEngagedSuggestions;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForRejectedSuggestions;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (BOOL)isEqualToATXUIFeedbackMetricsResult:(id)a0;

@end
