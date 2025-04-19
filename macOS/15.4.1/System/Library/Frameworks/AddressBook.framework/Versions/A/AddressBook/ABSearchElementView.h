@class ABSearchElementUIController, NSString, NSArray, NSView, NSPopUpButton, NSTextField;

@interface ABSearchElementView : NSView <NSMenuDelegate> {
    NSPopUpButton *_propertyPopUp;
    NSArray *_widgets;
    ABSearchElementUIController *_controller;
    NSString *_property;
    long long _comparison;
    NSView *withinIntervalView;
    NSTextField *withinTextField;
    NSPopUpButton *withinPopupButton;
    NSView *_entryView;
    long long _userInterfaceLayoutDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultComparisonForProperty:(id)a0;
+ (id)orderManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)value;
- (void)propertyChanged:(id)a0;
- (id)property;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (long long)userInterfaceLayoutDirection;
- (BOOL)validateMenuItem:(id)a0;
- (id)searchElement;
- (long long)comparison;
- (void)setComparison:(long long)a0;
- (id)conjoinedElementForProperties:(id)a0 value:(id)a1 withComparison:(long long)a2;
- (long long)junctionForComparison:(long long)a0 value:(id)a1;
- (void)addProperty:(id)a0 withLocalization:(id)a1 toMenu:(id)a2;
- (void)comparisonChanged:(id)a0;
- (long long)comparisonForProperty:(id)a0;
- (id)comparisonPopUpForProperty:(id)a0 withSelection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })comparisonPopUpFrame;
- (id)conjoinedElementForProperty:(id)a0 keys:(id)a1 value:(id)a2 withComparison:(long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dateControlFrame;
- (void)dateMatchingTypeChanged:(id)a0;
- (id)entryViewForEntry:(id)a0;
- (void)groupChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 controller:(id)a1 userInterfaceLayoutDirection:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })propertyPopUpFrame;
- (BOOL)requiresValue;
- (void)setGroupOrAccount:(id)a0 onPopUpButton:(id)a1;
- (void)setProperty:(id)a0 comparison:(long long)a1 value:(id)a2;
- (void)setValue:(id)a0 withProperty:(id)a1 comparison:(long long)a2 entryView:(id)a3;
- (void)setWidgets:(id)a0;
- (id)subvalue;
- (void)textFieldChanged:(id)a0;
- (void)textMatchingChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textMatchingFieldFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textMatchingPopUpFrame;
- (void)updateWithinDateTense;
- (void)updateWithinDateWidgetsWithInterval:(double)a0;

@end
