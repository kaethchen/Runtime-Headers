@protocol AXKKeyboardFocusListener;

@interface _AXKKeyboardFocusListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKKeyboardFocusListener> listener;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;

@end
