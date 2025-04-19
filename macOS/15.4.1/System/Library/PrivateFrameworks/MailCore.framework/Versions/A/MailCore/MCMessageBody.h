@class NSError, NSString, NSURL, MEMessageSecurityInformation, NSAttributedString, NSData, NSDictionary, NSMutableDictionary, NSObject, MEDecodedMessageBanner;
@protocol OS_os_log;

@interface MCMessageBody : NSObject <WebResourceLoadDelegate, EFLoggable, NSXMLParserDelegate> {
    NSMutableDictionary *_attachmentsByURL;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *html;
@property (nonatomic) unsigned long long originalEncoding;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy) NSDictionary *attachmentsByURL;
@property (nonatomic) BOOL isPlainText;
@property (retain, nonatomic) MEMessageSecurityInformation *securityInformation;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSError *smimeError;
@property (nonatomic) BOOL hasEncryptedDescendantPart;
@property (retain, nonatomic) NSData *decodingContext;
@property (retain, nonatomic) MEDecodedMessageBanner *messageDecodingBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPlainTextWebPreferences:(id)a0;
+ (void)setRichTextWebPreferences:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (id)initWithWebArchive:(id)a0 archiveIsMailInternal:(BOOL)a1;
- (void)_addWebArchiveDataToArray:(id)a0;
- (void)_mcMessageBodyCommonInit;
- (void)addAttachment:(id)a0 forURL:(id)a1;
- (id)attributedStringBlockingRemoteContent:(BOOL)a0 attachmentAccessLevel:(long long)a1;
- (id)initWithWebArchive:(id)a0;
- (void)setBaseURLFromHtml;
- (id)signerLabels;

@end
