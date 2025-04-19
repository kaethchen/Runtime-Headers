@class CKDShareIDSQLCache;

@interface CKDShareIDCache : NSObject

@property (readonly, nonatomic) CKDShareIDSQLCache *cache;

+ (id)_caches;
+ (id)cacheForContainer:(id)a0;
+ (void)dropCacheConnectionForContainer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addRecord:(id)a0;
- (void)removeZone:(id)a0;
- (void)removeRecordID:(id)a0;
- (void)addRecordID:(id)a0 withParentID:(id)a1;
- (void)addShare:(id)a0;
- (void)addZoneShare:(id)a0;
- (id)initInternalWithContainer:(id)a0 error:(id *)a1;
- (id)knownShareIDsForZoneID:(id)a0;
- (void)removeShareID:(id)a0;
- (void)removeZoneShare:(id)a0;
- (void)setShareID:(id)a0 forRecordID:(id)a1;
- (id)shareIDForRecordID:(id)a0;
- (id)zoneShareIDForZoneID:(id)a0;

@end
