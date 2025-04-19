@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void).cxx_destruct;
- (void)invoke;
- (id)initWithWindow:(id)a0;
- (id)prepare;
- (void)done;
- (void)abort;

@end
