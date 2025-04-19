@class NSString, BMAccessClient, BMStoreConfig, _PASLock;

@interface BMStorePublisherManager : NSObject {
    BMStoreConfig *_config;
    NSString *_streamIdentifier;
    BMAccessClient *_accessClient;
    Class _eventDataClass;
    NSString *_useCase;
    _PASLock *_protectedState;
}

- (void).cxx_destruct;
- (id)publisherWithOptions:(id)a0;
- (id)_createStreamReaderForRemoteName:(id)a0 eventDataClass:(Class)a1;
- (id)_publisherForDevice:(id)a0 options:(id)a1;
- (id)_publishersForDevices:(id)a0 includeLocal:(BOOL)a1 options:(id)a2;
- (id)_streamReaderWithRemoteName:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 streamConfig:(id)a1 accessClient:(id)a2 eventDataClass:(Class)a3 useCase:(id)a4;
- (id)publisherForDevice:(id)a0 options:(id)a1;
- (id)publishersForDevices:(id)a0 includeLocal:(BOOL)a1 options:(id)a2 pipeline:(id /* block */)a3;

@end
