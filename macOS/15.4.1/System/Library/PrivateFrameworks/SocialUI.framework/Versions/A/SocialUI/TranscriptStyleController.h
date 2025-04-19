@class DOMDocument, NSString, DOMHTMLHeadElement, DOMCSSStyleSheet, WebView, BuddyCSSProvider, NSMutableSet, DOMCSSMediaRule, DOMHTMLBodyElement, NSMutableDictionary, NSMutableArray;

@interface TranscriptStyleController : NSObject <DOMNodeFilter> {
    DOMCSSMediaRule *_2xRules;
    NSMutableSet *_dirtyCSSRules;
    NSMutableDictionary *_cssCache;
    NSMutableArray *_cssCacheOrder;
    NSMutableDictionary *_cssRuleMap;
    NSMutableDictionary *_2xRuleMap;
    unsigned int _changeCount;
    int _inBatchViewChangeCount;
    BOOL _batchChangeRequiresRebuild;
    BOOL _watchMessageAddressing;
    BOOL _messageContentIsHidden;
}

@property BOOL requiresCSSRebuild;
@property (nonatomic) BuddyCSSProvider *buddyCSSProvider;
@property (nonatomic) WebView *webView;
@property (retain, nonatomic) DOMDocument *DOM;
@property (retain, nonatomic) DOMHTMLHeadElement *head;
@property (readonly, retain, nonatomic) DOMHTMLBodyElement *body;
@property (retain, nonatomic) DOMCSSStyleSheet *DOMCSSStyleSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cssFilePath;
+ (id)scriptFileURLs;

- (void)dealloc;
- (void).cxx_destruct;
- (int)changeCount;
- (id)window;
- (void)clear;
- (short)acceptNode:(id)a0;
- (id)initWithWebView:(id)a0;
- (void)beginChanges;
- (void)endChanges;
- (id)chatItemGUIDs;
- (id)DOMCSSRuleForSelector:(id)a0;
- (void)clearCSSSelector:(id)a0 forProperties:(id)a1;
- (id)DOM2XMediaRuleForSelector:(id)a0;
- (id)DOMCSSStyleSheet;
- (void)_applyChanges;
- (BOOL)_applyQueuedCSSRules;
- (BOOL)_rebuildCSSContent;
- (void)_rebuildCSSRuleMap;
- (void)_setNeedsRebuild;
- (id)_styleElement;
- (BOOL)applyCSSSelector:(id)a0 fromDictionary:(id)a1;
- (BOOL)applyCSSSelector:(id)a0 property:(id)a1 value:(id)a2;
- (BOOL)applyCSSSelector:(id)a0 property:(id)a1 value:(id)a2 priority:(id)a3;
- (void)applyCurrentChanges;
- (void)applyRulesForChatItem:(id)a0;
- (void)beginBatchViewChange;
- (void)bodyFinishLayout;
- (void)clearCSSSelector:(id)a0;
- (void)dimTranscriptWithAnimation:(BOOL)a0;
- (BOOL)endBatchViewChange;
- (double)minHeightPerMessage;
- (void)personInfoChanged:(id)a0;
- (void)personPictureChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsForElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsForElementID:(id)a0;
- (void)setDOM2XMediaRule:(id)a0 forSelector:(id)a1;
- (void)setDOMCSSRule:(id)a0 forSelector:(id)a1;
- (void)showNamesAndPictures;
- (void)showPictures;
- (void)undimTranscriptWithAnimation:(BOOL)a0;

@end
