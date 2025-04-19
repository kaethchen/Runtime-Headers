@class NSCache;

@interface SearchUIBiomeSubscriberRegistry : NSObject

@property (class, readonly, nonatomic) SearchUIBiomeSubscriberRegistry *sharedManager;

@property (retain, nonatomic) NSCache *subscribers;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (id)requestSubscriberForIdentifier:(id)a0;
- (void)cacheSubscriber:(id)a0 forKey:(id)a1;
- (id)validCachedSubscriber:(id)a0 ofClass:(Class)a1;

@end
