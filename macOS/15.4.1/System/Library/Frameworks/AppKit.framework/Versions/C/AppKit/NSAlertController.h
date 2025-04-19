@class NSString, NSImage, NSArray, NSAlert, NSMutableArray;

@interface NSAlertController : NSObject <NSAlertDelegate> {
    NSAlert *_alert;
    NSMutableArray *_actions;
    NSMutableArray *_textFields;
    NSString *_identifier;
}

@property long long preferredStyle;
@property (readonly) NSAlert *alert;
@property long long suppressedButtonState;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSImage *image;
@property (readonly, copy) NSArray *actions;
@property (copy) id /* block */ helpHandler;
@property (readonly, copy) NSArray *textFields;
@property BOOL showsSuppressionButton;
@property (copy) NSString *suppressionText;
@property (getter=isSuppressed) BOOL suppressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetSuppressedAlertControllers;
+ (void)_validateActions:(id)a0 style:(unsigned long long)a1;
+ (id)alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;
+ (void)resetSuppressedAlertControllerWithIdentifier:(id)a0;
+ (BOOL)shouldSuppressAlertControllerWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (id)informativeText;
- (void)setInformativeText:(id)a0;
- (void)dismiss;
- (void)setMessageText:(id)a0;
- (id)_actionForModalResponse:(long long)a0;
- (void)_configureAlert:(id)a0;
- (id)_newAlert;
- (void)addAction:(id)a0;
- (id)addSecureTextFieldWithTitle:(id)a0 configurationHandler:(id /* block */)a1;
- (id)addTextFieldWithTitle:(id)a0 configurationHandler:(id /* block */)a1;
- (BOOL)alertShowHelp:(id)a0;
- (void)beginModalForParentWindow:(id)a0;
- (id)messageText;

@end
