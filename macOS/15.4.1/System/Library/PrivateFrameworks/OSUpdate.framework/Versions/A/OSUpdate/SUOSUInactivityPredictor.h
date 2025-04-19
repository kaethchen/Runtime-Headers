@class _OSInactivityPredictionClient, NSDate;

@interface SUOSUInactivityPredictor : NSObject

@property (retain) _OSInactivityPredictionClient *client;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithClient:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)predictedInactivityDate;

@end
