@class NSString;

@interface NexusDaemon.NXCloudServer : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ _daemon;
    void /* unknown type, empty encoding */ _dispatchQueue;
    void /* unknown type, empty encoding */ _environment;
    void /* unknown type, empty encoding */ _idsServiceIDs;
    void /* unknown type, empty encoding */ _idsServices;
    void /* unknown type, empty encoding */ _sessions;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3;

@end
