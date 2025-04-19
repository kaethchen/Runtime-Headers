@class NSKeyBindingAtom, NSDictionary, NSSortedArray;

@interface NSKeyBindingManager : NSObject {
    NSDictionary *_dict;
    NSSortedArray *_atomArray;
    NSKeyBindingAtom *_argBinding;
    NSKeyBindingAtom *_quoteBinding;
    NSKeyBindingManager *_nextManager;
}

+ (void)initialize;
+ (void)cancel;
+ (id)_keyBindingMonitor;
+ (void)_setKeyBindingMonitor:(id)a0;
+ (id)draggingKeyBindingManager;
+ (id)inputKeyBindingManager;
+ (void)interpretKeyEvents:(id)a0 sender:(id)a1;
+ (id)keyBindingManagerForClient:(id)a0;
+ (long long)repeatCount;
+ (void)setRepeatCountForNextCommand:(long long)a0;
+ (id)sharedKeyBindingManager;

- (void)dealloc;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void)setDictionary:(id)a0;
- (void)interpretEventAsText:(id)a0 forClient:(id)a1;
- (void)_monitorKeyBinding:(unsigned short)a0 flags:(unsigned long long)a1;
- (void)_setNextKeyBindingManager:(id)a0;
- (void)flushTextForClient:(id)a0;
- (BOOL)interpretEventAsCommand:(id)a0 forClient:(id)a1;
- (void)interpretKeyEvents:(id)a0 forClient:(id)a1;
- (void)setArgumentBinding:(id)a0;
- (void)setQuoteBinding:(id)a0;

@end
