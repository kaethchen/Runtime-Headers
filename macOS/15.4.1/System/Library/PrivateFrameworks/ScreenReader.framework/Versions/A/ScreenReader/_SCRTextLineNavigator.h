@class NSString, SCRElement, NSAttributedString, AXFTextMarkerRange;
@protocol SCRText;

@interface _SCRTextLineNavigator : NSObject <SCRBrailleLineNavigator_Internal, SCRBrailleLineNavigator>

@property (retain, nonatomic) SCRElement<SCRText> *_textProvider;
@property (retain, nonatomic) SCRElement<SCRText> *_topLevelTextProvider;
@property (copy, nonatomic) NSAttributedString *currentAttributedLine;
@property (retain, nonatomic) AXFTextMarkerRange *currentLineRange;
@property (nonatomic) long long affinity;
@property (readonly, nonatomic) SCRElement<SCRText> *textProvider;
@property (readonly, nonatomic) long long currentLineNumber;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)a0;
- (id)_fallbackLineRangeAfterRange:(id)a0 withInvalidrange:(id)a1;
- (id)_fallbackRange;
- (BOOL)_isNextLineRangeValid:(id)a0;
- (id)_lineRangeAfterRange:(id)a0;
- (BOOL)_moveByLine;
- (void)_setupTextProvider:(id)a0;
- (BOOL)_shouldIncludeFullLine;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)currentLineContainsUIElement:(id)a0;
- (id)fallbackAttributedDescription;
- (BOOL)moveToLineForElement:(id)a0 withInfo:(id)a1;
- (BOOL)moveToLineWithRange:(id)a0 affinity:(long long)a1;
- (BOOL)moveToNextLine;
- (BOOL)moveToPreviousLine;
- (id)navigationProvider;
- (BOOL)navigationProviderMatchesElement:(id)a0;
- (BOOL)panLineWithDirection:(long long)a0;
- (BOOL)providerMatchesElement:(id)a0;

@end
