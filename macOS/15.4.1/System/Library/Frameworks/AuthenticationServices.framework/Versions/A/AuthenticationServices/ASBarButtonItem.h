@class NSButton;

@interface ASBarButtonItem : NSObject

@property (readonly, nonatomic) NSButton *button;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;

@end
