@class LUITextField;

@interface LUISafeBootStatusController : LUIController {
    LUITextField *_safeBootTextField;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (id)_attributedStringFromString:(id)a0;
- (BOOL)_isSafeBoot;
- (void)_setupContentView;

@end
