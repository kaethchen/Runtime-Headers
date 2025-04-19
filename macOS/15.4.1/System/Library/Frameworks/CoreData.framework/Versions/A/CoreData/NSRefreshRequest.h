@class NSSet;

@interface NSRefreshRequest : NSPersistentStoreRequest {
    NSSet *_refreshObjects;
    unsigned int _refreshType;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)requestType;

@end
