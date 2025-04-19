@class NSArray, NSString, NSTimer, GEOCity, NSComboBox;

@interface GEOCityPickerViewPrivController : NSViewController <NSComboBoxDelegate, NSComboBoxDataSource> {
    BOOL stopAutomaticCompletion;
    NSTimer *restartAutoCompletionTimer;
    NSTimer *showComboMenuTimer;
    BOOL enabled;
    BOOL retainedHostWindow;
}

@property (nonatomic) NSComboBox *comboBox;
@property (retain, nonatomic) GEOCity *cityInComboBox;
@property (retain, nonatomic) NSArray *citiesInComboMenu;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (unsigned long long)comboBox:(id)a0 indexOfItemWithStringValue:(id)a1;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)comboBoxWillDismiss:(id)a0;
- (void)comboBoxWillPopUp:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)_stopRestartAutoCompletionTimer;
- (void)_autoCompleteComboBoxWithCity:(id)a0;
- (id)_citySelectedInComboMenu;
- (BOOL)_comboBoxSelectionIsEmpty;
- (id)_comboBoxStringValueOnTheLeftOfTheTextCursor;
- (BOOL)_doesUserInput:(id)a0 matchCityName:(id)a1;
- (BOOL)_doesUserInput:(id)a0 matchCountryName:(id)a1;
- (BOOL)_doesUserInput:(id)a0 matchString:(id)a1;
- (BOOL)_isComboBoxFirstResponder;
- (BOOL)_isValidComboBoxSelection;
- (void)_restartSearchTimerCallback;
- (void)_searchByNameCallback:(id)a0 returnedCityIDs:(id)a1;
- (void)_setComboMenuToCities:(id)a0;
- (void)_showComboMenuTimerCallback;
- (void)_startRestartAutoCompletionTimerWithTimeInterval:(double)a0;
- (void)_startShowComboMenuTimerWithTimeInterval:(double)a0;
- (void)_stopShowComboMenuTimer;
- (void)comboSelectionWasFinalized:(id)a0;
- (void)setComboBoxWithCity:(id)a0 allCities:(id)a1;
- (void)timeZoneFieldWasClicked:(id)a0;

@end
