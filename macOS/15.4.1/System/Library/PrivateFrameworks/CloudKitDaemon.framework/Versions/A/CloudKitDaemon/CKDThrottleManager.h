@class CKDThrottleTableGroup, CKThrottleTable, CKDLogicalDeviceContext;

@interface CKDThrottleManager : CKThrottleManager {
    CKDThrottleTableGroup *_throttleTableGroup;
    CKThrottleTable *_throttleTable;
}

@property (readonly, weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)_expirationDateForTTLSeconds:(unsigned int)a0;
+ (id)throttleFromPThrottlingConfig:(id)a0;
+ (id)throttleFromServerJSONDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)addThrottle:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;
- (void)throttleListBecameEmpty;
- (void)throttleWasAdded:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;
- (void)invalidateAdopterThrottles;
- (void)loadThrottlesFromDatabase;
- (id)throttleTable:(BOOL)a0;

@end
