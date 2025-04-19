@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)depositSyncWithAccessor:(id /* block */)a0;
- (BOOL)peekSyncWithAccessor:(id /* block */)a0;
- (void)peekWithAccessor:(id /* block */)a0;

@end
