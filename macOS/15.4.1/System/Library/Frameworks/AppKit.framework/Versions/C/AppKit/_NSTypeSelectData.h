@class NSString, NSView, NSTypeSelectPanel;

@interface _NSTypeSelectData : NSObject {
    NSString *_currentSearch;
    long long _currentSearchRow;
    long long _currentSearchCol;
    long long _initialSearchRow;
    long long _totalRows;
    NSView *_view;
    NSTypeSelectPanel *_typeSelectPanel;
    unsigned char _foundMatch : 1;
    unsigned int _reserved : 31;
}

+ (BOOL)ignoreTypos;

- (void)dealloc;
- (void)_orderFrontTypeSelectPanel;
- (void)_resetCurrentSearchRow;
- (void)_typeSelectEndCurrentSearch;
- (void)cancelScheduledEndOfSearch;
- (void)clearView;
- (id)currentSearch;
- (long long)currentSearchCol;
- (long long)currentSearchRow;
- (BOOL)foundMatch;
- (id)initWithInitialSearchRow:(long long)a0 totalRows:(long long)a1 forView:(id)a2;
- (long long)initialSearchRow;
- (id)nextSearchStringForNewValue:(id)a0;
- (void)scheduleEndOfSearch;
- (void)setCurrentSearch:(id)a0;
- (void)setCurrentSearchCol:(long long)a0;
- (void)setCurrentSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCurrentSearchRow:(long long)a0;
- (void)setFoundMatch:(BOOL)a0;

@end
