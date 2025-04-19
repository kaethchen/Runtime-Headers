@class NSSet, NSDictionary;

@interface QLConfiguration : NSObject {
    NSSet *_siteWhileList;
    NSDictionary *_schemesMapping;
}

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowWebPluginsForURL:(id)a0;
- (id)fakeSchemeForURL:(id)a0;
- (SEL)selectorForURL:(id)a0 forObject:(id)a1;

@end
