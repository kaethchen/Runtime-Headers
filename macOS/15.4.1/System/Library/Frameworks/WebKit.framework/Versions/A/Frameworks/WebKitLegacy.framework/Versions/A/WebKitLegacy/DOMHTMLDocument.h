@class NSString, DOMHTMLCollection;

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection *embeds;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (readonly) int width;
@property (readonly) int height;
@property (copy) NSString *dir;
@property (copy) NSString *designMode;
@property (readonly, copy) NSString *compatMode;
@property (copy) NSString *bgColor;
@property (copy) NSString *fgColor;
@property (copy) NSString *alinkColor;
@property (copy) NSString *linkColor;
@property (copy) NSString *vlinkColor;

- (void)close;
- (void)open;
- (void)clear;
- (void)write:(id)a0;
- (id)_createDocumentFragmentWithText:(id)a0;
- (id)createDocumentFragmentWithText:(id)a0;
- (id)_createDocumentFragmentWithMarkupString:(id)a0 baseURLString:(id)a1;
- (void)captureEvents;
- (id)createDocumentFragmentWithMarkupString:(id)a0 baseURL:(id)a1;
- (void)releaseEvents;
- (void)writeln:(id)a0;

@end
