@class MPModelObject, MPModelLibraryRequest, MPMediaQuery;

@interface MusicKit_RemoteLibraryPlaybackQueue : MusicKit_RemotePlaybackQueue {
    MPModelLibraryRequest *_libraryRequest;
    MPMediaQuery *_mediaQuery;
    MPModelObject *_underlyingStartObject;
}

- (void).cxx_destruct;
- (void)_insertQueueWithPath:(id)a0 position:(long long)a1 sessionID:(id)a2 completionHandler:(id /* block */)a3;
- (long long)_persistentIDForStartItem;
- (void)_resolveMediaQueryForLibraryRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setQueueWithPath:(id)a0 shuffleMode:(long long)a1 sessionID:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithContainer:(id)a0 startItem:(id)a1 replaceQueueIntent:(long long)a2;
- (id)initWithItem:(id)a0 replaceQueueIntent:(long long)a1;
- (id)initWithRequest:(id)a0 startItem:(id)a1 replaceQueueIntent:(long long)a2;
- (void)insertQueueWithPath:(id)a0 position:(long long)a1 sessionID:(id)a2 completionHandler:(id /* block */)a3;
- (void)setQueueWithPath:(id)a0 shuffleMode:(long long)a1 sessionID:(id)a2 completionHandler:(id /* block */)a3;

@end
