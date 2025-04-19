@class CNAvatarCache, NSHashTable;

@interface LPContactsBadgeViewAvatarCache : NSObject {
    NSHashTable *_clients;
    CNAvatarCache *_avatarCache;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)avatarCache;

@end
