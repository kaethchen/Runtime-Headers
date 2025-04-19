@protocol SEMIndexSiteAvailabilityObserver;

@interface SEMIndexSiteObserverEntry : NSObject

@property (weak, nonatomic) id<SEMIndexSiteAvailabilityObserver> observer;

- (id)description;
- (void).cxx_destruct;

@end
