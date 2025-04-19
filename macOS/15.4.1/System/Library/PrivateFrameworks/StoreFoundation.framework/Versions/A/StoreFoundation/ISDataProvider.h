@class NSString, ISAuthenticationContext, NSURL, ISStoreClient, NSNumber;

@interface ISDataProvider : NSObject <NSCopying>

@property (readonly) ISStoreClient *storeClient;
@property (retain) ISAuthenticationContext *authenticationContext;
@property int bagType;
@property long long contentLength;
@property (retain) NSString *contentType;
@property (readonly, getter=isStream) BOOL stream;
@property (readonly) long long streamedBytes;
@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) id output;
@property (retain) NSURL *redirectURL;

+ (id)provider;
+ (id)providerWithStoreClient:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithStoreClient:(id)a0;
- (void)closeStreamReturningError:(id *)a0;
- (void)configureFromProvider:(id)a0;
- (void)migrateOutputFromSubProvider:(id)a0;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void)resetStream;

@end
