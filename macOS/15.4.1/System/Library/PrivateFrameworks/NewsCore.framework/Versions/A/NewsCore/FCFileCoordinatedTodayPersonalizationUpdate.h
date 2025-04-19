@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (id)consumeUpdates;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (void)submitUpdate:(id)a0 withCompletion:(id /* block */)a1;

@end
