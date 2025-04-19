@class VKRouteLine;

@interface VKRouteLineObserverForExternalFeatures : NSObject <VKRouteLineObserverProtocol> {
    void *_routeLineSupport;
    VKRouteLine *_routeLine;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRouteLineSupport:(void *)a0 andRouteLine:(id)a1;
- (void)routeLineDidUpdateSections:(id)a0;

@end
