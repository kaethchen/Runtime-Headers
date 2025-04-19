@class NSString, NSDictionary, NSData, NSNumber, IDSCertifiedDeliveryReplayKey;

@interface IDSCertifiedDeliveryContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *originalGUID;
@property (readonly, nonatomic) long long originalEncryptionType;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long certifiedDeliveryVersion;
@property (readonly, nonatomic) NSData *certifiedDeliveryRTS;
@property (readonly, nonatomic) NSData *senderToken;
@property (retain, nonatomic) NSNumber *failureReason;
@property (retain, nonatomic) NSString *failureReasonMessage;
@property (readonly, nonatomic) IDSCertifiedDeliveryReplayKey *replayKey;
@property (nonatomic) BOOL generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *deliveryStatusContext;
@property (readonly, nonatomic) NSString *localURI;
@property (readonly, nonatomic) NSString *remoteURI;
@property (readonly, nonatomic) NSData *queryHash;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCertifiedDeliveryContext:(id)a0 queryHash:(id)a1;
- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4;
- (id)initWithGUID:(id)a0 service:(id)a1 encryptionType:(long long)a2 certifiedDeliveryVersion:(long long)a3 certifiedDeliveryRTS:(id)a4 senderToken:(id)a5 failureReason:(id)a6 failureReasonMessage:(id)a7;
- (id)initWithGUID:(id)a0 service:(id)a1 encryptionType:(long long)a2 certifiedDeliveryVersion:(long long)a3 certifiedDeliveryRTS:(id)a4 senderToken:(id)a5 failureReason:(id)a6 failureReasonMessage:(id)a7 replayKey:(id)a8 generateDeliveryReceipt:(BOOL)a9 deliveryStatusContext:(id)a10 localURI:(id)a11 remoteURI:(id)a12 queryHash:(id)a13;
- (id)initWithGUID:(id)a0 service:(id)a1 encryptionType:(long long)a2 certifiedDeliveryVersion:(long long)a3 certifiedDeliveryRTS:(id)a4 senderToken:(id)a5 localURI:(id)a6 remoteURI:(id)a7;
- (id)initWithGUID:(id)a0 service:(id)a1 encryptionType:(long long)a2 certifiedDeliveryVersion:(long long)a3 certifiedDeliveryRTS:(id)a4 senderToken:(id)a5 localURI:(id)a6 remoteURI:(id)a7 replayKey:(id)a8;

@end
