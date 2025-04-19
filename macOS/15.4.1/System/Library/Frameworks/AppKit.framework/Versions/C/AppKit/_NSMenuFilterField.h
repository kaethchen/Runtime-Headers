@class NSString;

@interface _NSMenuFilterField : NSSearchField <NSSearchFieldDelegate> {
    NSString *_query;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)_allowsContextMenus;
- (void)_deselectText;
- (unsigned long long)_effectiveFocusRingType;
- (id)_hitTestForEvent:(id)a0;
- (BOOL)allowsVibrancy;
- (unsigned long long)focusRingType;
- (void)selectText:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewDidMoveToWindow;

@end
