@class NSCache;

@interface MKRouteContextBuilder : NSObject {
    NSCache *_routeOverlapCache;
}

- (void).cxx_destruct;
- (float)_defaultPuckRadius;
- (id)buildRouteContextForAnchorPoints:(id)a0;
- (id)buildRouteContextForRoutes:(id)a0 selectedRouteIndex:(unsigned long long)a1;

@end
