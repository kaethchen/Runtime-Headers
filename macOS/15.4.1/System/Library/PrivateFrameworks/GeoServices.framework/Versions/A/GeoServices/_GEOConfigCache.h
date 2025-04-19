@class geo_isolater;

@interface _GEOConfigCache : NSObject {
    id _cache;
    geo_isolater *_isolator;
}

- (void).cxx_destruct;
- (id)init:(id)a0;
- (void)withCache:(id /* block */)a0;

@end
