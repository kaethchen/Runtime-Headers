@class NSUUID;

@interface FinderKit.SwiftAirDropReceiveTransfer : NSObject <TAirDropTransfer> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ airDropClient;
    void /* unknown type, empty encoding */ receiveTransfer;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ askRequest;
    void /* unknown type, empty encoding */ totalBytes;
    void /* unknown type, empty encoding */ transferIdentifier;
    void /* unknown type, empty encoding */ endpointIdentifier;
    void /* unknown type, empty encoding */ baseDictionary;
    void /* unknown type, empty encoding */ transferFinished;
}

@property (nonatomic, readonly) NSUUID *transferIdentifier;
@property (nonatomic, readonly) NSUUID *endpointIdentifier;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (void)setHandler:(id /* block */)a0;
- (void)startObservingChanges;
- (void)acceptWithCustomAppBundleURL:(id)a0;
- (void)acceptWithDestinationURL:(id)a0;
- (void)cancelledByUser:(BOOL)a0;
- (void)defaultAccept;

@end
