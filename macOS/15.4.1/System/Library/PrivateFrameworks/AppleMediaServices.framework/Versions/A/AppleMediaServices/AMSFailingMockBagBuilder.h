@class NSError;

@interface AMSFailingMockBagBuilder : AMSMockBagBuilder

@property double delay;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)createMockBag;

@end
