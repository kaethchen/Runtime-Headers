@class NSCondition, MELoader, NSMutableArray;

@interface MEExporterManager : NSObject {
    NSMutableArray *_exportQueue;
    NSCondition *_exportWaitCondition;
}

@property (readonly) MELoader *loader;

+ (id)sharedManager;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)init;
- (void)loadAllPlugins;
- (void)_exportCanceled:(id)a0;
- (void)_exportComplete:(id)a0;
- (void)_queueAndWait:(id)a0;
- (id)exporterWithDocument:(id)a0;
- (void)loadPluginWithIdentifier:(id)a0;

@end
