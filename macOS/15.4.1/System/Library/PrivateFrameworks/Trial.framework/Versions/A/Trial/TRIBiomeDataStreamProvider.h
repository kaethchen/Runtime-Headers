@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TRIBiomeDataStreamProvider : NSObject <TRIExternalParameterProviding> {
    NSObject<OS_dispatch_queue> *_providerQueue;
    NSMutableDictionary *_streamIdentifierstoSubscribedSinks;
    BOOL _shouldSubscribeWithWaking;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_subscribeForStreamIdentifier:(id)a0 eventHandler:(id /* block */)a1;
- (void)_unsubscribeAllDataStreams;
- (void)readLastDataStreamEventForIdentifier:(id)a0 eventHandler:(id /* block */)a1;
- (void)readLastDataStreamEventForIdentifier:(id)a0 withFilter:(id /* block */)a1 eventHandler:(id /* block */)a2;
- (void)setShouldSubscribeWithWaking:(BOOL)a0;
- (void)subscribeDataStreamForIdentifier:(id)a0 eventHandler:(id /* block */)a1;
- (void)unsubscribeAllDataStreams;

@end
