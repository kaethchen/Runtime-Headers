@class NFApplet, NSDictionary, NSObject;
@protocol NFTNEPReaderDelegate, NFSecureTransactionServicesHandoverHybridSessionDelegate, NFTNEPTagDeviceDelegate;

@interface NFSecureTransactionServicesHandoverHybridSession : NFSession {
    NSDictionary *_appletsById;
    id<NFSecureTransactionServicesHandoverHybridSessionDelegate> _delegate;
    unsigned long long _numActiveSEs;
    BOOL _fieldNotificationSent;
}

@property (retain, nonatomic) NSObject<NFTNEPTagDeviceDelegate> *tagDeviceDelegate;
@property (retain, nonatomic) NSObject<NFTNEPReaderDelegate> *tagReaderDelegate;
@property (weak) id<NFSecureTransactionServicesHandoverHybridSessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;

- (void).cxx_destruct;
- (void)endSession;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didStartSession:(id)a0;
- (BOOL)setActiveApplet:(id)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (void)startSTSNotificationListenerWithEndpoint:(id)a0;
- (void)stopTNEPOperation;

@end
