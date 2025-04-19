@class NSTextField, NSSegmentedControl, NSTextTable, NSColor, NSPopUpButton, NSTextView, NSMutableArray, NSButton, NSColorWell, NSStepper;

@interface NSTableOptions : NSWindowController {
    NSTextField *rowsField;
    NSStepper *rowsStepper;
    NSTextField *columnsField;
    NSStepper *columnsStepper;
    NSButton *mergeCellsButton;
    NSButton *splitCellsButton;
    NSButton *nestTableButton;
    NSSegmentedControl *horizontalAlignment;
    NSSegmentedControl *verticalAlignment;
    NSTextField *borderField;
    NSStepper *borderStepper;
    NSColorWell *borderColorWell;
    NSPopUpButton *backgroundPopUp;
    NSColorWell *backgroundColorWell;
    NSTextView *_client;
    NSTextTable *_table;
    unsigned long long _level;
    struct _NSRange { unsigned long long location; unsigned long long length; } _tableRange;
    long long _numRows;
    long long _numCols;
    long long _minRow;
    long long _maxRow;
    long long _minCol;
    long long _maxCol;
    long long _spacesOccupied;
    long long _maxSpaces;
    NSMutableArray *_cellRanges;
    NSColor *_defaultBorderColor;
    BOOL _modifyingClient;
}

+ (id)sharedTableOptions;

- (void)dealloc;
- (id)init;
- (void)removeClient:(id)a0;
- (void)setClient:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)setBorderColor:(id)a0;
- (void)addDefaultTable;
- (void)setBorderWidth:(double)a0;
- (BOOL)tableParameters;
- (void)_addDefaultTable;
- (void)addColumns:(long long)a0;
- (void)addOrNestTable;
- (void)addRows:(long long)a0;
- (void)clearTableParameters;
- (void)enableAll:(BOOL)a0;
- (BOOL)getRows:(unsigned long long *)a0 columns:(unsigned long long *)a1 inTabDelimitedString:(id)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)mergeCells;
- (void)modifyOptionsViaPanel:(id)a0;
- (void)orderFrontTableOptionsPanel:(id)a0;
- (void)removeColumns:(long long)a0;
- (void)removeRows:(long long)a0;
- (void)removeTable;
- (void)setBackgroundColor:(id)a0;
- (void)setDefaultBorderColor:(id)a0;
- (void)setHorizontalAlignment:(long long)a0;
- (void)setVerticalAlignment:(unsigned long long)a0;
- (BOOL)shouldCascadeWindows;
- (void)splitCell:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)splitCells;
- (id)tableOptionsPanel:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldSetColor:(id)a1;
- (void)updateUI;
- (void)windowDidLoad;
- (BOOL)worksWhenModal;

@end
