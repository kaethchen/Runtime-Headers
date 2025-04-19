@class NSMutableDictionary;

@interface VCAudioSmartRoutingManager : VCObject {
    NSMutableDictionary *_optOutOfSmartRouting;
}

+ (id)sharedInstance;
+ (void)addClient:(id)a0;
+ (void)removeClient:(id)a0;

- (void)dealloc;
- (id)init;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)applyAudioScoreForOptOutOfSmartRouting:(BOOL)a0 error:(id *)a1;
- (void)updateOptOutOfSmartRouting;

@end
