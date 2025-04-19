@class NSMutableDictionary, SFSafariExtensionContext;

@interface _SFSafariExtensionContextManager : NSObject {
    NSMutableDictionary *_contexts;
    SFSafariExtensionContext *_mostRecentContext;
    SFSafariExtensionContext *_currentContext;
}

@property (readonly, nonatomic) SFSafariExtensionContext *currentContext;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0;
- (id)_mostRecentContext;
- (id)bestContextForKnownContext:(id)a0;
- (void)setContext:(id)a0 forBlock:(id /* block */)a1;

@end
