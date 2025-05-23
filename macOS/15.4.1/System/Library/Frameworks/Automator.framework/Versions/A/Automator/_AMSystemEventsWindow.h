@class NSArray, NSString, _AMSystemEventsDocument;

@interface _AMSystemEventsWindow : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) id accessibilityDescription;
@property (readonly, copy) id objectDescription;
@property (readonly, copy) id enabled;
@property (readonly, copy) NSArray *entireContents;
@property (copy) id focused;
@property (readonly, copy) id help;
@property (readonly, copy) id maximumValue;
@property (readonly, copy) id minimumValue;
@property (readonly, copy) NSString *name;
@property (readonly, copy) id orientation;
@property (copy) id position;
@property (readonly, copy) NSString *role;
@property (readonly, copy) NSString *roleDescription;
@property (copy) id selected;
@property (copy) id size;
@property (readonly, copy) id subrole;
@property (readonly, copy) NSString *title;
@property (copy) id value;
@property (readonly, copy) NSString *name;
@property long long index;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL closeable;
@property (readonly) BOOL miniaturizable;
@property BOOL miniaturized;
@property (readonly) BOOL resizable;
@property BOOL visible;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;
@property (readonly, copy) _AMSystemEventsDocument *document;

- (id)groups;
- (id)attributes;
- (id)actions;
- (id)buttons;
- (id)drawers;
- (id)lists;
- (id)sheets;
- (id)textFields;
- (id)images;
- (void)delete;
- (id)browsers;
- (void)moveTo:(id)a0;
- (long long)id;
- (id)tables;
- (id)UIElements;
- (id)tabGroups;
- (id)sliders;
- (id)colorWells;
- (id)comboBoxes;
- (id)progressIndicators;
- (id)toolbars;
- (id)splitters;
- (id)busyIndicators;
- (id)checkboxes;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (id)growAreas;
- (id)incrementors;
- (id)menuButtons;
- (id)outlines;
- (id)popOvers;
- (id)popUpButtons;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (id)radioButtons;
- (id)radioGroups;
- (id)relevanceIndicators;
- (void)saveIn:(id)a0 as:(int)a1;
- (id)scrollAreas;
- (id)scrollBars;
- (id)splitterGroups;
- (id)staticTexts;
- (id)textAreas;

@end
