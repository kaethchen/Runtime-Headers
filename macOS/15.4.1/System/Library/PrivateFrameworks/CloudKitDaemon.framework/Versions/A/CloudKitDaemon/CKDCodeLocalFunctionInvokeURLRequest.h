@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)databaseScope;
- (long long)serverType;
- (id)additionalHeaderValues;
- (id)requestBodyStream;
- (BOOL)allowsAnonymousAccount;
- (Class)expectedResponseClass;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (BOOL)parsingStandaloneMessage;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)requestGETPreAuth;
- (Class)requestMessageClass;
- (BOOL)shouldCompressBody;
- (BOOL)wantsProtocolTranslator;

@end
