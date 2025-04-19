@class NSArray, NSString, NSURL, WKWebView, NSImage, NSMutableData;

@interface ELSDocumentHelper : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) NSURL *tempURL;
@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSArray *contentsText;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSImage *imageSignature;
@property (retain, nonatomic) NSMutableData *pdfData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)initSingleton;
- (id)saveData:(id)a0 toFilePath:(id)a1;

@end
