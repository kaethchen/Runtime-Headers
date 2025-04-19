@class NSTextField, NSProgressIndicator, NSArray, NSDatePicker, AMLevelIndicator, NSView, NSPopUpButton, NSMutableDictionary, AMApplicationDefinition, NSBundle, NSButton;

@interface AMWhoseViewItem : NSObject

@property (retain) NSArray *_topLevelObjects;
@property (weak) NSPopUpButton *_propertyPopUpButton;
@property (weak) NSPopUpButton *_qualifierPopUpButton;
@property (weak) NSPopUpButton *_valuePopUpButton;
@property (weak) NSPopUpButton *_sizeValuePopUpButton;
@property (weak) NSTextField *_valueTextField;
@property (weak) NSTextField *_sizeValueTextField;
@property (weak) NSProgressIndicator *_progressIndicator;
@property (weak) NSDatePicker *_datePicker;
@property (weak) AMLevelIndicator *_ratingIndicator;
@property (weak, nonatomic) NSView *view;
@property (retain) NSButton *addButton;
@property (retain) NSButton *removeButton;
@property (retain, nonatomic) NSArray *properties;
@property (retain, nonatomic) NSMutableDictionary *settings;
@property (retain) AMApplicationDefinition *applicationDefinition;
@property (retain) NSBundle *bundle;
@property (retain, nonatomic) NSArray *propertyNames;
@property (retain, nonatomic) NSArray *qualifierNames;
@property (copy) NSArray *valueNames;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)changeValue:(id)a0;
- (void)changeProperty:(id)a0;
- (void)_addLocalizedItemsWithTitles:(id)a0 toPopUpButton:(id)a1;
- (id)_applicationDefinitionBundle;
- (id)_propertyWithName:(id)a0;
- (id)_qualifiers;
- (id)_qualifiersNamesForType:(id)a0;
- (void)_releaseTopLevelObjects;
- (void)changeQualifier:(id)a0;
- (id)initWithProperties:(id)a0 settings:(id)a1 andApplicationDefinition:(id)a2;

@end
