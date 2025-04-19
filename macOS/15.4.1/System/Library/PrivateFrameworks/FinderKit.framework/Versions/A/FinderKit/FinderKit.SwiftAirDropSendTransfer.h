@class NSUUID;

@interface FinderKit.SwiftAirDropSendTransfer : NSObject <TAirDropTransfer> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ airDropClient;
    void /* unknown type, empty encoding */ sendTransfer;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ transferIdentifier;
    void /* unknown type, empty encoding */ endpointIdentifier;
    void /* unknown type, empty encoding */ baseDictionary;
    void /* unknown type, empty encoding */ progressTask;
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
