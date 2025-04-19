@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _PXDefaultAudioCueProvider : NSObject <PXAudioCueProvider> {
    NSMutableDictionary *_providersByCatalog;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_os_log> *_log;
}

- (id)init;
- (void).cxx_destruct;
- (id)_cueProviderForCatalog:(long long)a0;
- (id)requestCuesForAudioAsset:(id)a0 resultHandler:(id /* block */)a1;

@end
