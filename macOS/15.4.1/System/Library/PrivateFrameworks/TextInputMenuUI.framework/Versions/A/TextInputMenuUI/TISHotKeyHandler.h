@class NSMutableDictionary;

@interface TISHotKeyHandler : NSObject {
    NSMutableDictionary *hotKeys;
}

@property (readonly) NSMutableDictionary *hotKeys;

+ (id)sharedHotKeyHandler;

- (void).cxx_destruct;
- (void)install;
- (void)unregister:(struct EventHotKeyID { unsigned int x0; unsigned int x1; })a0;
- (int)handleHotEvent:(struct OpaqueEventRef { } *)a0 handlerReference:(struct OpaqueEventHandlerCallRef { } *)a1;
- (void)registerHotkey:(struct EventHotKeyID { unsigned int x0; unsigned int x1; })a0 keyCode:(unsigned int)a1 modifiers:(unsigned short)a2 delegate:(id)a3 action:(SEL)a4;

@end
