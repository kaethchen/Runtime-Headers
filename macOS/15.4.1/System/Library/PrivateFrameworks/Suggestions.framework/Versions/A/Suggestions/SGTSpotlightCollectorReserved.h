@class NSObject;
@protocol OS_dispatch_source;

@interface SGTSpotlightCollectorReserved : NSObject {
    struct __MDQuery { } *query;
    NSObject<OS_dispatch_source> *fallbackTimer;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
