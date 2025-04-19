@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject

@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)sharedInstance;
+ (id)placeholderBusinessNameForBrandURI:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchBusinessNameForUID:(id)a0;
- (void)_fetchedBrandName:(id)a0 forUID:(id)a1;
- (id)businessNameForUID:(id)a0 blockFetch:(BOOL)a1 updateHandler:(id /* block */)a2;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;

@end
