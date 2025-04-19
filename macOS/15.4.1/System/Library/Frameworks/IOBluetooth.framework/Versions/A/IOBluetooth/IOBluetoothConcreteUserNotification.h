@class NSString;

@interface IOBluetoothConcreteUserNotification : IOBluetoothUserNotification {
    id mWatchedObject;
    id mRegisteredObject;
    unsigned char mSelfRegistered;
}

@property unsigned short L2CAPPSM;
@property unsigned char RFCOMMChannelID;
@property void *refCon;
@property void /* function */ *callback;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSString *selectorString;
@property int notificationType;
@property (retain, nonatomic) id watchedObject;
@property (retain, nonatomic) id registeredObject;
@property int direction;

- (id)description;
- (void).cxx_destruct;
- (void)l2capNotificationRoutine:(id)a0;
- (void)notificationRoutine:(id)a0;
- (void)objcL2CAPNotificationRoutine:(id)a0;
- (void)objcNotificationRoutine:(id)a0;
- (void)objcRFCOMMNotificationRoutine:(id)a0;
- (void)peerConnected:(id)a0 error:(long long)a1;
- (void)peerDisconnected:(id)a0 withError:(long long)a1;
- (void)peerL2CAPChannelConnected:(id)a0 error:(long long)a1;
- (void)peerL2CAPChannelDisconnected:(id)a0 error:(long long)a1;
- (void)peerRFCOMMChannelConnected:(id)a0 error:(long long)a1;
- (void)peerRFCOMMChannelDisconnected:(id)a0 error:(long long)a1;
- (void)rfcommNotificationRoutine:(id)a0;
- (void)setSelfRegistered;

@end
