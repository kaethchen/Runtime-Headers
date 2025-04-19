@class NSData, EDMessageCategorizationResult, MCMessageHeaders;

@interface IMAPMessageWithCache : IMAPMessage {
    NSData *_messageData;
    MCMessageHeaders *_headers;
    EDMessageCategorizationResult *_categorizationResult;
    long long _authenticationState;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (void)setHeaders:(id)a0;
- (long long)authenticationState;
- (void)setAuthenticationState:(long long)a0;
- (id)categorizationResult;
- (BOOL)isMessageContentLocallyAvailable;
- (void)setCategorizationResult:(id)a0;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headersFetchIfNotAvailable:(BOOL)a0;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;

@end
