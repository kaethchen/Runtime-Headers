@class NSNumber, NSDictionary, NSString;

@interface IDSBassHarborCheckInMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *cohort;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCohort:(id)a0;

@end
