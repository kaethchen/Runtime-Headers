@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject

@property (readonly, copy) NSString *type;
@property (readonly) id<DOMEventTarget> target;
@property (readonly) id<DOMEventTarget> currentTarget;
@property (readonly) unsigned short eventPhase;
@property (readonly) BOOL bubbles;
@property (readonly) BOOL cancelable;
@property (readonly) unsigned long long timeStamp;
@property (readonly) id<DOMEventTarget> srcElement;
@property BOOL returnValue;
@property BOOL cancelBubble;

- (void)dealloc;
- (BOOL)isTrusted;
- (void)stopPropagation;
- (BOOL)composed;
- (BOOL)defaultPrevented;
- (void)initEvent:(id)a0 :(BOOL)a1 :(BOOL)a2;
- (void)initEvent:(id)a0 canBubbleArg:(BOOL)a1 cancelableArg:(BOOL)a2;
- (void)preventDefault;
- (void)stopImmediatePropagation;

@end
