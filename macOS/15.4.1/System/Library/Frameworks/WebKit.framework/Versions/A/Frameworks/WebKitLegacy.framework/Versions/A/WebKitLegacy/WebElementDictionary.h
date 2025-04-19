@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    void *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (void)dealloc;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)_image;
- (id)_imageRect;
- (id)_isSelected;
- (id)_title;
- (id)_targetWebFrame;
- (id)_absoluteLinkURL;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_altDisplayString;
- (id)_domNode;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_spellingToolTip;
- (id)_textContent;
- (id)_titleDisplayString;
- (id)_webFrame;
- (id)initWithHitTestResult:(const void *)a0;

@end
