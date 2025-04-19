@interface LUIViewController : LUIController {
    BOOL _hidden;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (id)initWithStyle:(int)a0;
- (void)refresh;
- (void)setUIEnabled:(BOOL)a0;
- (BOOL)usesWindow;

@end
