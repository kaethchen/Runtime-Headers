@class NSString, IDSURI;

@interface IDSOffGridDeliveryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long sendMode;
@property (nonatomic) BOOL encryptPayload;
@property (retain, nonatomic) IDSURI *senderURI;
@property (nonatomic) long long command;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSString *originalUUID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)setDefaultOptionsForTransportType:(long long)a0;

@end
