@class NSDictionary;

@interface CNCDContactDictionaryPrefetchHelper : NSObject {
    NSDictionary *_index;
}

+ (id)os_log;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)cachedContactForObjectID:(id)a0;
- (id)contactForObjectID:(id)a0;
- (id)fetchedContactForObjectID:(id)a0;
- (void)prefetchContactsAffectedByChanges:(id)a0;

@end
