@class NSArray;

@interface TVRCUpNextController : NSObject

@property (retain, nonatomic) NSArray *upNextInfos;
@property (copy, nonatomic) id /* block */ fetchUpNextInfosImpl;

- (void).cxx_destruct;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (void)_fetchPlayableOpenURLForMediaIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)_fetchUpNextInfosWithPaginationToken:(id)a0 completion:(id /* block */)a1;
- (void)_openURLString:(id)a0 completion:(id /* block */)a1;
- (void)_playItemForMediaIdentifier:(id)a0 kind:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)addItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchUpNextInfosWithPaginationToken:(id)a0 completion:(id /* block */)a1;
- (void)markAsWatchedWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)playItem:(id)a0 completion:(id /* block */)a1;
- (void)removeItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;

@end
