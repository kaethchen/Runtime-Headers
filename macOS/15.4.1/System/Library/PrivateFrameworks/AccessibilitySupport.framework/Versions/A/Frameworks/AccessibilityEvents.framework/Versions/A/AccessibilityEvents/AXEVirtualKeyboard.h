@class NSMutableSet;

@interface AXEVirtualKeyboard : NSObject {
    struct __CGEventSource { } *__eventSource;
}

@property (class, readonly) AXEVirtualKeyboard *shared;

@property (nonatomic) unsigned int _eventTapLocation;
@property (nonatomic) unsigned long long _cgEventFlags;
@property (retain, nonatomic) NSMutableSet *_downKeys;

+ (unsigned long long)_cgEventFlagsForModifier:(unsigned long long)a0;
+ (unsigned long long)_cgEventFlagsFromDownKeys:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CGEventSource { } *)_eventSource;
- (id)_initWithEventTapLocation:(unsigned int)a0;
- (BOOL)isKeySynthesizedDown:(unsigned long long)a0;
- (void)synthesizeKeyDown:(unsigned long long)a0;
- (void)synthesizeKeyDown:(unsigned long long)a0 markupHandler:(id /* block */)a1;
- (void)synthesizeKeyUp:(unsigned long long)a0;
- (void)synthesizeKeyUp:(unsigned long long)a0 markupHandler:(id /* block */)a1;

@end
