@class NSString, NSDictionary, NSURL, NSArray, NSAttributedString;

@interface ICNFMCParsedMessage : NSObject <NSXMLParserDelegate>

@property (copy, nonatomic) NSString *html;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSDictionary *attachmentsByURL;
@property (copy, nonatomic) NSArray *stationeryBackgroundImageURLs;
@property (nonatomic) BOOL isPlainText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedMessageWithWebArchive:(id)a0 archiveIsMailInternal:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWebArchive:(id)a0 archiveIsMailInternal:(BOOL)a1;
- (void)_addWebArchiveDataToArray:(id)a0;
- (void)addAttachment:(id)a0 forURL:(id)a1;
- (id)initWithWebArchive:(id)a0;
- (void)setBaseURLFromHtml;

@end
