@class WLKSharedFileStorage;

@interface WLKUpNextDeltaStore : NSObject {
    WLKSharedFileStorage *_fileStorage;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)delete:(id /* block */)a0;
- (void)read:(id /* block */)a0;
- (void)merge:(id)a0 completion:(id /* block */)a1;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
