@class NSString, NSMutableArray;

@interface ASKNibObjectInfoManager : NSObject {
    NSString *_bundleIdentifier;
    NSMutableArray *_connectors;
}

+ (void)initialize;
+ (void)addEventHandlerToProcess:(id)a0;
+ (void)enableEventHandlerProcessing;
+ (id)eventHandlersToProcess;
+ (void)processEventHandlers;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)a0;
- (void)awakeFromNib;
- (void)_finishLaunching:(id)a0;
- (void)_pluginObjectLoaded:(id)a0;
- (id)_eventHandlerWithName:(id)a0;
- (void)addConnector:(id)a0;
- (id)connectors;
- (unsigned long long)indexOfConnector:(id)a0;
- (void)removeConnector:(id)a0;
- (void)setConnectors:(id)a0;

@end
