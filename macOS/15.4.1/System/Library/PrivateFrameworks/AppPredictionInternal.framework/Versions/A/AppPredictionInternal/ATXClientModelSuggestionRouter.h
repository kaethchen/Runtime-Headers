@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isRoutingConfigurationLoaded;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;

@end
