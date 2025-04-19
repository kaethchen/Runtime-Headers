@class NSString, NSUserDefaultsController, NSTextField;

@interface UINSPreferencesKeyedRadioButton : NSButton {
    NSString *_description;
    NSTextField *_descriptionField;
}

@property (copy) NSString *keyPath;
@property (retain) id valueToSet;
@property (retain) NSUserDefaultsController *userDefaultsController;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_updateDescriptionIfNecessary;
- (void)activateRadioAction:(id)a0;
- (void)useDescription:(id)a0 displayedOn:(id)a1;

@end
