@class NSTextField, NSString, NSTextView, NSMutableArray, NSPopUpButton, NSComboBox, NSButton;
@protocol NSFindPatternField;

@interface NSFindPanel : NSPanel <NSWindowDelegate> {
    NSComboBox<NSFindPatternField> *_findComboBox;
    NSComboBox<NSFindPatternField> *_replaceComboBox;
    NSTextField *_statusField;
    NSButton *_ignoreCaseButton;
    NSButton *_replaceAllButton;
    NSButton *_replaceButton;
    NSButton *_findNextButton;
    NSButton *_findPreviousButton;
    NSButton *_replaceAndFindButton;
    NSButton *_wrapAroundButton;
    NSPopUpButton *_matchPopUp;
    NSTextView *_fe;
    NSMutableArray *_recentFindStrings;
    NSMutableArray *_recentFindOptions;
    NSMutableArray *_recentReplaceStrings;
    long long _numberOfRecentStrings;
    BOOL _caseInsensitiveSearchDefault;
    long long _substringMatchDefault;
    BOOL _lastFindWasSuccessful;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFindPanel;
+ (BOOL)_isLoaded;

- (void)dealloc;
- (BOOL)_caseInsensitiveSearchDefault;
- (long long)_defaultSubstringMatchType;
- (void)_findNextAndOrderFindPanelOut:(id)a0;
- (void)_makeCurrentSearchOptionsDefault;
- (void)_restoreDefaultSearchOptions;
- (void)_setCaseInsensitiveSearchDefault:(BOOL)a0;
- (void)_setDefaultSearchOptions:(id)a0;
- (void)_setDefaultSubstringMatchType:(long long)a0;
- (void)_setLastFindWasSuccessful:(BOOL)a0;
- (void)awakeFromNib;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (long long)numberOfItemsInComboBox:(id)a0;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;
- (void)windowDidUpdate:(id)a0;

@end
