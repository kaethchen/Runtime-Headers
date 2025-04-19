@class NSString;
@protocol SESRKESessionDelegate, SESRKESessionContinuationDelegate;

@interface SESRKESession : SESSession <SESRKESessionCallbackInterface>

@property (weak, nonatomic) id<SESRKESessionDelegate> delegate;
@property (weak, nonatomic) id<SESRKESessionContinuationDelegate> continuationDelegate;
@property (readonly, nonatomic) NSString *activeKeyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstance;

- (void).cxx_destruct;
- (void)didStartSession:(id)a0;
- (id)getVehicleReports:(id *)a0;
- (id)cancelRKEFunction:(id)a0 readerIdentifier:(id)a1;
- (BOOL)continueExecutingRKEFunction:(id)a0 action:(id)a1 arbitraryData:(id)a2 readerIdentifier:(id)a3 error:(id *)a4;
- (void)didCreateKey:(id)a0 forVehicle:(id)a1;
- (void)didEndUnexpectedly:(id)a0;
- (void)didInvalidateWithError:(id)a0;
- (void)didReceiveContinuationRequestFor:(id)a0 actionIdentifier:(id)a1 arbitraryData:(id)a2 fromVehicle:(id)a3;
- (void)didReceivePassthroughMessage:(id)a0 fromVehicle:(id)a1;
- (BOOL)isPassiveEntryAvailable:(id)a0 isAvailable:(BOOL *)a1 error:(id *)a2;
- (void)sendEvent:(id)a0 fromVehicle:(id)a1;
- (BOOL)sendPassthroughMessage:(id)a0 readerIdentifier:(id)a1 error:(id *)a2;
- (void)sendRKEFunction:(id)a0 action:(id)a1 readerIdentifier:(id)a2 authorization:(id)a3 isEnduring:(BOOL)a4 isHandlingExternal:(BOOL)a5 completion:(id /* block */)a6;
- (id)sign:(id)a0 readerIdentifier:(id)a1 error:(id *)a2;

@end
