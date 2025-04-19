@class MTTreatment, NSDictionary;

@interface MTTreatmentContext : NSObject

@property (retain) MTTreatment *treatment;
@property (retain) NSDictionary *metrics;

- (void).cxx_destruct;
- (id)initWithTreatment:(id)a0 metrics:(id)a1;

@end
