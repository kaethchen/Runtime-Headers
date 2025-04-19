@interface JRSInputMethodController : NSObject

+ (id)controller;

- (void)setCurrentInputMethodForLocale:(id)a0;
- (id)availableInputMethodLocales;
- (id)currentInputMethodLocale;
- (id)currentInputMethodName;

@end
