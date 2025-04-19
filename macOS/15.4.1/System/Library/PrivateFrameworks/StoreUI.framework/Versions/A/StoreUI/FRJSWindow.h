@class NSWindow;

@interface FRJSWindow : FRJSObject

@property (readonly, weak) NSWindow *window;

- (void).cxx_destruct;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (id)initWithWindow:(id)a0 identifier:(id)a1;

@end
