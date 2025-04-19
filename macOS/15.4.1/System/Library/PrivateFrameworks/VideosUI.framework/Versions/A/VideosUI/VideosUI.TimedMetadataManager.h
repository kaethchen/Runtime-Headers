@interface VideosUI.TimedMetadataManager : NSObject <VUITimedMetadataManager> {
    void /* unknown type, empty encoding */ playbackInfos;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObserverForPlayer:(id)a0;
- (void)removeObserverForPlayer:(id)a0;

@end
