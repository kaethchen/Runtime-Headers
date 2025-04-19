@class NSOrderedSet, SCRElement, NSSet, NSMutableDictionary;

@interface SCRBrailleLineManager : NSObject

@property (weak, nonatomic) SCRElement *_containerElement;
@property (nonatomic) long long _focusedElementIndex;
@property (nonatomic) BOOL _lineNeedsRefresh;
@property (retain, nonatomic) NSOrderedSet *_orderedLine;
@property (copy, nonatomic) NSSet *_retainedElements;
@property (retain, nonatomic) NSMutableDictionary *_uiElementToElementDict;
@property (nonatomic) BOOL focusThrough;
@property (nonatomic) int lineFocus;

- (void).cxx_destruct;
- (id)_focusedElement;
- (void)_addDescriptionForElement:(id)a0 request:(id)a1 focused:(BOOL)a2 useTextLine:(BOOL)a3;
- (id)_deepestFocusedThroughElement;
- (BOOL)_elementSupportsContainerSummary:(id)a0;
- (id)buildBrailleLineRequestAndUpdateFocusedLine;
- (id)initWithContainerElement:(id)a0;
- (BOOL)isLineEqualToUIElements:(id)a0;
- (BOOL)isLineValid;
- (void)setBrailleLineNeedsRebuild;
- (BOOL)setFocusedElement:(id)a0;
- (void)setLine:(id)a0 focusedElement:(id)a1 retainedElements:(id)a2;

@end
