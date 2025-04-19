@class NSString;

@interface NSAlertAction : NSObject <NSCopying>

@property (copy) NSString *title;
@property long long style;
@property (copy) id /* block */ handler;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *keyEquivalent;
@property unsigned long long keyEquivalentModifierMask;

+ (void)_validateTitle:(id)a0 style:(long long)a1;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_configureButton:(id)a0;
- (BOOL)_fireOffAction;

@end
