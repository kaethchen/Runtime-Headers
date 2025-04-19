@class NSScriptCommand, NSAppleEventDescriptor;

@interface NSAppleEventHandling : NSObject {
    NSAppleEventDescriptor *_event;
    NSAppleEventDescriptor *_replyEvent;
    NSScriptCommand *_scriptCommand;
    BOOL _isSuspendedWithAE;
    char _padding[3];
}

- (void)dealloc;
- (void)suspend;
- (id)event;
- (id)initWithEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 replyEvent:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (id)replyEvent;
- (void)resumeWithScriptCommandResult:(id)a0;
- (id)scriptCommand;
- (void)setScriptCommand:(id)a0;

@end
