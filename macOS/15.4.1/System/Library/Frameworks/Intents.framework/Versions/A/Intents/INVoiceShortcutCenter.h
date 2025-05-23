@protocol INVCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject

@property (class, readonly) INVoiceShortcutCenter *sharedCenter;

@property (retain, nonatomic, setter=_setVoiceShortcutClient:) id<INVCVoiceShortcutClient> voiceShortcutClient;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithVoiceShortcutClient:(id)a0;
- (void)getAllVoiceShortcutsWithCompletion:(id /* block */)a0;
- (void)getVoiceShortcutWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setShortcutSuggestions:(id)a0;

@end
