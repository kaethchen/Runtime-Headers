@class LPLinkMetadata, NSString, LPLinkHTMLGenerator, NSURL, NSNumber, WebView;
@protocol LPLinkHTMLTextGeneratorDelegate;

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate> {
    WebView *_webView;
    LPLinkHTMLGenerator *_DOMGenerator;
    NSString *_generatedFragmentText;
}

@property (weak, nonatomic) id<LPLinkHTMLTextGeneratorDelegate> delegate;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *htmlPrefix;
@property (copy, nonatomic) NSNumber *layoutDirection;
@property (readonly, copy, nonatomic) NSString *HTMLFragmentString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_cleanUpDOMDocumentBody;
- (void)_commonInitWithPresentationProperties:(id)a0 URL:(id)a1;
- (void)_generateDOMDocumentBody;
- (void)generateHTMLFragmentString:(id /* block */)a0;
- (void)generateWebArchiveData:(id /* block */)a0;
- (id)initWithPresentationProperties:(id)a0 URL:(id)a1;
- (id)linkHTMLGenerator:(id)a0 URLForResource:(id)a1 withMIMEType:(id)a2;

@end
