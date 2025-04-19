@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCRapportFileTransferManager : NSObject {
    NSMutableDictionary *_fileTransferSessions;
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fileTransferQueue;
@property (readonly, nonatomic) NSURL *directoryURL;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)buildFileTransferSessionWithTargetDeviceIdentifier:(id)a0;
- (void)closeAllFileTransferSessions;
- (void)closeFileTransferSessionWithDeviceIdentifier:(id)a0;
- (id)initWithDirectoryURL:(id)a0 accessAssertion:(id)a1;
- (id)initiateFileTransferSesionBackToTargetDeviceWithIdentifier:(id)a0 withExchangedPeerPublicKey:(id)a1;

@end
