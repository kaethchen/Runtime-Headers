@class NSArray, STLockoutAlertController, NSString;

@interface STLockoutAlertAction : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) STLockoutAlertController *_alertController;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)pinActionWithHandler:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_handleAction:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
