@class RTVisit;

@interface RTVisitMonitorState : NSObject

@property (retain, nonatomic) RTVisit *lastVisitIncident;
@property (retain, nonatomic) RTVisit *lastLowConfidenceVisitIncident;

- (id)init;
- (void).cxx_destruct;
- (void)dump;
- (id)initWithLastVisit:(id)a0 lastLowConfidenceVisit:(id)a1;

@end
