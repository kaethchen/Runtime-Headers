@class NSObject, CPKCharactersView, CPKCalculatedGeometry;
@protocol OS_dispatch_queue;

@interface CPKCharactersSectionView : NSView

@property (nonatomic) BOOL allowFallbackInSection;
@property (nonatomic) BOOL alwaysShowsScrollBars;
@property (retain, nonatomic) CPKCalculatedGeometry *calculatedGeometry;
@property (nonatomic) long long charactersCount;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) long long dropTargetIndex;
@property (nonatomic) BOOL editable;
@property (nonatomic) NSObject<OS_dispatch_queue> *fallbackTaskQueue;
@property (nonatomic) BOOL highlightedByMouse;
@property (nonatomic) struct CGPoint { double x; double y; } lastMouseDownLocation;
@property (nonatomic) unsigned long long ownerChangedCount;
@property (retain, nonatomic) CPKCharactersView *parentCharactersView;
@property (nonatomic) long long popupTargetIndex;
@property (nonatomic) unsigned long long parentDataGeneration;
@property (nonatomic) long long section;
@property (nonatomic) long long selectedIndex;

- (void)dealloc;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)isFlipped;
- (id)menuForEvent:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)reloadData;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)_delayedShowSkinToneVariantsPopup;
- (void)_drawCharacterString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 origin:(struct CGPoint { double x0; double x1; })a2 font:(struct __CTFont { } *)a3;
- (struct CGPoint { double x0; double x1; })_drawingPosOfGlyph:(unsigned short)a0 orCharacter:(id)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 font:(id)a3 newFontSize:(double *)a4;
- (id)characterAtIndex:(long long)a0 withSpecificFont:(id *)a1;
- (id)characterDescriptionAtIndex:(long long)a0;
- (void)confirmCurrentSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectAtIndex:(long long)a0 withDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForSkinToneSelectorAtIndex:(unsigned long long)a0;
- (void)highlightIndex:(long long)a0 byMouse:(BOOL)a1;
- (void)setParentCharactersView:(id)a0 section:(long long)a1;
- (void)showSkinToneVariantsPopupAtIndex:(long long)a0 byMouse:(BOOL)a1;

@end
