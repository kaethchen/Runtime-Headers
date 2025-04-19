@class NSString;

@interface AMSDialogButton : NSObject

@property (copy) id /* block */ handler;
@property long long style;
@property (copy) NSString *title;

+ (id)buttonWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)buttonWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
