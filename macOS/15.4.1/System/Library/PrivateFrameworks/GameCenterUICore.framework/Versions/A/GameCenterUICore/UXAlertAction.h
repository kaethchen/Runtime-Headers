@class NSString;

@interface UXAlertAction : NSObject <NSCopying>

@property (copy) id /* block */ handler;
@property (readonly) NSString *title;
@property (readonly) long long style;
@property (getter=isEnabled) BOOL enabled;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
