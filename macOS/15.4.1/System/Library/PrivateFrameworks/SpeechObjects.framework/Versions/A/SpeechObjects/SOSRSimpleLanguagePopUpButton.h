@class NSString, NSArray;

@interface SOSRSimpleLanguagePopUpButton : NSPopUpButton

@property (retain) NSString *previouslyChosenLocaleIdentifier;
@property (retain) NSArray *supportedLocaleIdentifiers;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (id)selectedLanguageItem;
- (id)_rowsFromSRLanguageItems:(id)a0;
- (void)_startDelayedPopUpUpdate;
- (void)_updateSRLanguageMenu;
- (void)buildPopUpButtonAndSelectLocaleIdentifier:(id)a0 supportedLocaleIdentifiers:(id)a1;

@end
