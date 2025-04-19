@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PCSCKKSOutOfBandFetchCache : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct _PCSIdentitySetData { } *identities;
@property (retain) NSMutableSet *currentItemNegativeCache;
@property (retain) NSMutableDictionary *identityNegativeCache;

+ (id)cache;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cacheCurrentIdentityFetchResult:(struct _PCSIdentitySetData { } *)a0 notFound:(id)a1;
- (void)cachePCSIdentityFetchResult:(struct _PCSIdentitySetData { } *)a0 notFound:(id)a1 serviceID:(unsigned int)a2;
- (struct _PCSIdentityData { } *)copyIdentity:(id)a0;
- (void)getCurrentIdentities:(id)a0 result:(id /* block */)a1;
- (void)getPCSIdentities:(id)a0 forServiceID:(unsigned int)a1 result:(id /* block */)a2;

@end
