@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGTSpotlightCollectorWarmingQueryReserved : NSObject {
    NSObject<OS_dispatch_queue> *warmingQueryQueue;
    NSObject<OS_dispatch_source> *warmingQueryTimer;
    struct __MDQuery { } *warmingQuery;
    BOOL runWarmingQuery;
    NSString *baseQuery;
    NSArray *searchScope;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
