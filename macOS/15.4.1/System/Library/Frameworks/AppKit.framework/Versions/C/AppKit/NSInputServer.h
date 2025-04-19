@class NSString;

@interface NSInputServer : NSObject <NSInputServiceProvider, NSInputServerMouseTracker> {
    NSString *_name;
    id _delegate;
}

- (void)dealloc;
- (id)description;
- (void)_inputClientChangedStatus:(id)a0 inputClient:(id)a1;
- (void)activeConversationChanged:(id)a0 toNewConversation:(long long)a1;
- (void)activeConversationWillChange:(id)a0 fromOldConversation:(long long)a1;
- (BOOL)canBeDisabled;
- (void)cancelInput:(id)a0 conversation:(long long)a1;
- (void)doCommandBySelector:(SEL)a0 client:(id)a1;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)inputClientBecomeActive:(id)a0;
- (void)inputClientDisabled:(id)a0;
- (void)inputClientEnabled:(id)a0;
- (void)inputClientResignActive:(id)a0;
- (void)insertText:(id)a0 client:(id)a1;
- (void)markedTextAbandoned:(id)a0;
- (void)markedTextSelectionChanged:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 client:(id)a1;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)a0 atCoordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (BOOL)mouseDraggedOnCharacterIndex:(unsigned long long)a0 atCoordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (void)mouseUpOnCharacterIndex:(unsigned long long)a0 atCoordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (void)senderDidBecomeActive:(id)a0;
- (void)senderDidResignActive:(id)a0;
- (void)setActivated:(BOOL)a0 sender:(id)a1;
- (void)terminate:(id)a0;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)wantsToHandleMouseEvents;
- (BOOL)wantsToInterpretAllKeystrokes;

@end
