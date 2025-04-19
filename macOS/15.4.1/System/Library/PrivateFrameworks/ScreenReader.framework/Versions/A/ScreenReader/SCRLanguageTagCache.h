@class AXFUIElement, NSAttributedString, AXFTextMarkerRange;

@interface SCRLanguageTagCache : NSObject

@property (retain, nonatomic) AXFTextMarkerRange *languageTagCacheRange;
@property (retain, nonatomic) NSAttributedString *languageTagCacheString;
@property (retain, nonatomic) AXFUIElement *uiElement;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 range:(id)a1 uiElement:(id)a2;
- (BOOL)isInLanguageTagCache:(id)a0 uiElement:(id)a1;
- (id)getLanguageTagCache:(id)a0 uiElement:(id)a1;
- (void)setLanguageTagCache:(id)a0 range:(id)a1 uiElement:(id)a2;

@end
