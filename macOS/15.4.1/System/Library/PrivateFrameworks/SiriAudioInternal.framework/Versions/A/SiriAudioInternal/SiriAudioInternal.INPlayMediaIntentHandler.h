@interface SiriAudioInternal.INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling> {
    void /* unknown type, empty encoding */ playbackService;
    void /* unknown type, empty encoding */ localSearch;
    void /* unknown type, empty encoding */ deviceProvider;
    void /* unknown type, empty encoding */ nowPlaying;
    void /* unknown type, empty encoding */ seDeviceProvider;
    void /* unknown type, empty encoding */ appleMediaServicesProvider;
    void /* unknown type, empty encoding */ featureFlagProvider;
    void /* unknown type, empty encoding */ nearDeviceProvider;
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ siriKitTaskLoggingProvider;
    void /* unknown type, empty encoding */ onscreenEntityProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handlePlayMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForPlayMedia:(id)a0 withCompletion:(id /* block */)a1;

@end
