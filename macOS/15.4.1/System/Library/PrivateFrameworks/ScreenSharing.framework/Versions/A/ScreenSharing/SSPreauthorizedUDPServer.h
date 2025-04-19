@class NSData, NSString;

@interface SSPreauthorizedUDPServer : NSObject {
    void *mIPCRef;
}

@property int connectedUDPSocket;
@property unsigned long long maximumBytesPerSecond;
@property long long encryptionLevel;
@property (copy) NSData *encryptionKey;
@property (copy) NSString *username;
@property (copy) NSString *remoteIPPort;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;

@end
