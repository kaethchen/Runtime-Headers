@class AXFUIElement, NSArray, SCRTable, NSString;

@interface _SCRTableSelectionNavigator : NSObject <SCRBrailleLineNavigator_Internal>

@property (retain, nonatomic) SCRTable *elementProvider;
@property (retain, nonatomic) AXFUIElement *_focusedElement;
@property (nonatomic) unsigned long long _focusedElementIndex;
@property (retain, nonatomic) NSArray *_currentlySelectedUIElements;
@property (retain, nonatomic) NSArray *_lastBrailleLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (id)_rowUIElementForTableElement:(id)a0;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)currentLineContainsUIElement:(id)a0;
- (BOOL)moveToLineForElement:(id)a0 withInfo:(id)a1;
- (id)navigationProvider;
- (BOOL)navigationProviderMatchesElement:(id)a0;
- (BOOL)panLineWithDirection:(long long)a0;

@end
