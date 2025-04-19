@class PDSlideLayout, PDNotesSlide, NSMutableArray, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (id)description;
- (void).cxx_destruct;
- (id)transition;
- (id)background;
- (id)commentAtIndex:(unsigned long long)a0;
- (void)doneWithContent;
- (id)parentSlideBase;
- (void)setSlideLayout:(id)a0;
- (void)addComment:(id)a0;
- (unsigned long long)commentCount;
- (id)commentForAuthorId:(unsigned long long)a0 authorIdx:(unsigned long long)a1;
- (id)defaultTheme;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)notesSlide;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (void)removeUnnecessaryOverrides;
- (void)setInheritedTextStyle:(id)a0 placeholderType:(int)a1 defaultTextListStyle:(id)a2;
- (void)setNotesSlide:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayout;

@end
