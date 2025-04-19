@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (id)_storeIdentifier;

@end
