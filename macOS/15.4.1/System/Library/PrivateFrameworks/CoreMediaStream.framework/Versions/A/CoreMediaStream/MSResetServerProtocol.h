@interface MSResetServerProtocol : MSStreamsProtocol {
    struct __MSRSPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; } _context;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)abort;
- (void)_coreProtocolDidFailAuthenticationError:(id)a0;
- (void)_coreProtocolDidFinishError:(id)a0;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)resetServerState;

@end
