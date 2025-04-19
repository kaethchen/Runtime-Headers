@class NSObject, NSViewSpy;

@interface ItemReflectionButton : NSButton

@property (weak, nonatomic) NSViewSpy *targetDisplay;
@property (weak, nonatomic) NSObject *targetObject;
@property (nonatomic) BOOL canNavigateTo;
@property (nonatomic) BOOL canNavigateToValid;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)clicked:(id)a0;

@end
