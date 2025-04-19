@class NSMapTable, NSArray, NSData, NSMutableData, NSObject;
@protocol OS_os_log, MFPOPAccount, MFPOPConnectionDelegate;

@interface MFPOPConnection : MCConnection {
    NSMutableData *_sendBuffer;
    NSMapTable *_listResults;
    NSMapTable *_serverMessageIdsByNumber;
    id<MFPOPConnectionDelegate> _delegate;
    NSData *_apopTimeStamp;
    NSArray *_capabilities;
    BOOL _capaCommandFailed;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id context;
@property (nonatomic) unsigned long long numberOfMessagesToFetch;
@property (nonatomic) unsigned long long numberOfMessagesFetched;
@property (nonatomic) BOOL currentlyFetchingMessage;
@property (nonatomic) unsigned long long numberOfMessagesAvailable;
@property (nonatomic) BOOL connectionShouldPrefetchMessages;
@property (weak) id<MFPOPAccount> account;
@property (nonatomic) unsigned long long totalBytesToFetch;
@property (nonatomic) unsigned long long totalBytesReceived;
@property (nonatomic) long long activityMonitorKey;
@property (readonly, nonatomic) BOOL messagesAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)quit;
- (void)_setupConnection;
- (BOOL)authenticate;
- (id)_capabilities;
- (BOOL)isNonAppInitiated;
- (id)authenticationMechanisms;
- (BOOL)_getListResults;
- (BOOL)_apopWithUsername:(id)a0 password:(id)a1;
- (id)_authenticateWithNonPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (BOOL)_authenticateWithSASLClient:(id)a0;
- (BOOL)_completeConnectionWithResult:(BOOL)a0;
- (id)_copyResponseLineData;
- (void)_logServerResponse:(id)a0;
- (id)_newDataForMessage:(unsigned long long)a0 ofSize:(unsigned long long)a1 informDelegate:(BOOL)a2;
- (void)_parseErrorFromResponseData:(id)a0 isCapabilitiesError:(BOOL)a1 isAuthenticationError:(BOOL)a2;
- (BOOL)_parseSingleLineResponse:(id)a0 status:(long long)a1 responseCode:(long long *)a2 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 humanReadableText:(id *)a4;
- (BOOL)_pass:(id)a0;
- (BOOL)_quit;
- (BOOL)_readAndParseSingleLineResponseIsCapabilities:(BOOL)a0 isAuthentication:(BOOL)a1 logFullResponse:(BOOL)a2;
- (BOOL)_readMultilineResponseWithMaxSize:(unsigned long long)a0 intoMutableData:(id)a1 informDelegate:(BOOL)a2;
- (BOOL)_retr:(unsigned long long)a0;
- (BOOL)_sendCommand:(const char *)a0 dontLogIndex:(unsigned long long)a1 withArguments:(id)a2;
- (BOOL)_startTLS;
- (BOOL)_supportsAPOP;
- (BOOL)_supportsAuthResponseCode;
- (BOOL)_supportsResponseCodes;
- (BOOL)_supportsStartTLS;
- (BOOL)_supportsUSER;
- (BOOL)_user:(id)a0;
- (BOOL)dele:(unsigned long long)a0;
- (BOOL)deleteMessagesOnServer:(id)a0;
- (BOOL)doStat;
- (id)errorURLScheme;
- (BOOL)fetchMessages:(id)a0 totalBytes:(unsigned long long)a1;
- (BOOL)getMessageNumbers:(id *)a0 andMessageIdsByNumber:(id *)a1;
- (void)getTopOfMessageNumber:(unsigned long long)a0 intoMutableData:(id)a1;
- (id)messageIDForMessageNumber:(unsigned long long)a0;
- (id)newMessageHeaderForMessageNumber:(unsigned long long)a0;
- (void)setDelegate:(id)a0 context:(id)a1;
- (void)setMessageID:(id)a0 forMessageNumber:(unsigned long long)a1;
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)a0;
- (BOOL)supportsPlainTextSchemes;

@end
