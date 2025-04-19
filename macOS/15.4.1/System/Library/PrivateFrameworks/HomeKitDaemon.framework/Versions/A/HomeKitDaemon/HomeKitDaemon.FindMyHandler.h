@class HMDFMF;

@interface HomeKitDaemon.FindMyHandler : SwiftNativeNSObject <HMDFMFHandlerProtocol> {
    void /* unknown type, empty encoding */ isStarted;
    void /* unknown type, empty encoding */ findMySession;
    void /* unknown type, empty encoding */ fmfStatus;
}

@property (nonatomic, readonly) BOOL isThisDesignatedFMFDevice;

- (id)init;
- (void)queryFMFStatusWithCompletion:(void (^)(HMDFMF *))a0;

@end
