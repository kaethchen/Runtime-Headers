@class NSString, NSButton;

@interface AKBarButtonItem : NSObject {
    NSButton *_barButton;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)_createButton;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;

@end
