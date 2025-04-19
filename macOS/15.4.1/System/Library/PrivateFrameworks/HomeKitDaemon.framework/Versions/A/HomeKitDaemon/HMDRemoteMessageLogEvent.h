@class NSString;

@interface HMDRemoteMessageLogEvent : HMMLogEvent

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) BOOL sending;
@property (readonly, copy, nonatomic) NSString *msgIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL secure;
@property (readonly, nonatomic) NSString *msgName;
@property (readonly, nonatomic) long long msgType;
@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) long long msgQoS;

+ (id)newFromRemoteMessage:(id)a0 device:(id)a1 transportType:(int)a2 sending:(BOOL)a3;
+ (id)peerInformationForDevice:(id)a0;
+ (id)peerInformationForRemoteMessage:(id)a0;
+ (id)receivedRemoteMessage:(id)a0 transportType:(int)a1;
+ (id)receivedRemoteMessageName:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 messageQoS:(long long)a7;
+ (id)sentRemoteMessage:(id)a0 device:(id)a1 transportType:(int)a2;
+ (id)sentRemoteMessage:(id)a0 transportType:(int)a1;
+ (id)sentRemoteMessageName:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 messageQoS:(long long)a7;

- (void).cxx_destruct;
- (id)initWithMessageName:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 sending:(BOOL)a7 messageQoS:(long long)a8;

@end
