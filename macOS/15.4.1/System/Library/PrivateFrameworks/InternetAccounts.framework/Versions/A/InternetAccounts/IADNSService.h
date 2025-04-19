@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IADNSService : NSObject

@property (retain) NSString *serverAddress;
@property (retain) NSMutableDictionary *mailServers;
@property (readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL readResultsFromCache;
@property BOOL writeResultsToCache;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_sortedHostPairs;
- (void)beginQuerySync;
- (BOOL)hasPrimaryMailHost:(id)a0;
- (id)initWithServerAddress:(id)a0;

@end
