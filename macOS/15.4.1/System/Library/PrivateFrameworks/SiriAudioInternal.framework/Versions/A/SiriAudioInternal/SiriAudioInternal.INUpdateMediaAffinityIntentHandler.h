@interface SiriAudioInternal.INUpdateMediaAffinityIntentHandler : NSObject <INUpdateMediaAffinityIntentHandling> {
    void /* unknown type, empty encoding */ mediaRemoteAPIProvider;
    void /* unknown type, empty encoding */ playbackController;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleUpdateMediaAffinity:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForUpdateMediaAffinity:(id)a0 withCompletion:(id /* block */)a1;

@end
