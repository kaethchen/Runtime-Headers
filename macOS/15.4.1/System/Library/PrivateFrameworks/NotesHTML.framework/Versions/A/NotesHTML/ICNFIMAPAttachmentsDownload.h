@protocol ICNFIMAPMessage;

@interface ICNFIMAPAttachmentsDownload : ICNFIMAPCompoundDownload

@property (retain) id<ICNFIMAPMessage> message;

- (void).cxx_destruct;
- (id)createCopy;
- (id)initWithIMAPMessage:(id)a0;
- (void)saveCompletedDownloads;

@end
