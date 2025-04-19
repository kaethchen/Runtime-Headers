@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedNotificationDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void)peekSyncWithAccessor:(id /* block */)a0;

@end
