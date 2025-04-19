@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSVoiceTriggerAlwaysOnProcessor : NSObject {
    NSObject<OS_dispatch_group> *_aopSwitchGroup;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(id /* block */)a0;
- (void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)_setBuiltInRTModelDictionary:(id)a0;

@end
