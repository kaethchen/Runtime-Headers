@class NSObject;
@protocol OS_os_log;

@interface CertificationLogging : NSObject {
    NSObject<OS_os_log> *_log;
}

+ (void)bleLogMessageReceived:(id)a0 peerUUID:(id)a1;
+ (void)bleLogMessageSent:(id)a0 peerUUID:(id)a1;
+ (void)bleLogRSSI:(id)a0 peerUUID:(id)a1;
+ (void)bleLogVehicleConnected:(id)a0;
+ (void)bleLogVehicleDisconnected:(id)a0;
+ (void)logEncryptedAPDU:(id)a0 decrypted:(id)a1;

- (void).cxx_destruct;

@end
