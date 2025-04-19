@class NSData, ICNFMCMessageHeaders;

@interface ICNFIMAPMessageWithCache : ICNFIMAPMessage {
    NSData *_messageData;
    ICNFMCMessageHeaders *_headers;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (id)headers;
- (void)setHeaders:(id)a0;
- (id)headersIfAvailable;
- (BOOL)isMessageContentLocallyAvailable;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
