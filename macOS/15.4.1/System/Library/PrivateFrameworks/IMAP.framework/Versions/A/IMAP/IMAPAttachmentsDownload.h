@protocol IMAPMessage;

@interface IMAPAttachmentsDownload : IMAPCompoundDownload {
    unsigned int _bytesFetchedForCompletedSubdownlaods;
}

@property (retain) id<IMAPMessage> message;

- (void).cxx_destruct;
- (unsigned int)bytesFetched;
- (id)createCopy;
- (id)initWithIMAPMessage:(id)a0;
- (void)saveCompletedDownloads;

@end
