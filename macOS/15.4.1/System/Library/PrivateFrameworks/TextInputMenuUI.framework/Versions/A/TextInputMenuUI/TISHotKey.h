@class NSString;

@interface TISHotKey : NSObject {
    id delegate;
    NSString *hotKeyAction;
}

@property struct OpaqueEventHotKeyRef { } *eventRef;

- (void)dealloc;
- (void).cxx_destruct;
- (void)doIt:(id)a0;
- (id)initWithDelegate:(id)a0 action:(SEL)a1 eventRef:(struct OpaqueEventHotKeyRef { } *)a2;

@end
