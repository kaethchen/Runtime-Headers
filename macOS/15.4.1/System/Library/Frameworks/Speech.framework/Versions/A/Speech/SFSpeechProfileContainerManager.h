@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFSpeechProfileContainerManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_containerForPersona;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)personaForContainerRelativeURL:(id)a0;
- (id)containerForCurrentPersona;
- (id)containerForPersona:(id)a0;
- (void)releaseContainerForPersona:(id)a0;

@end
