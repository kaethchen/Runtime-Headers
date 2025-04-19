@class NSDate, NSString, NSArray, NSData, NSDictionary, MEEmailAddress, MEMessageRecipients, MEMessageSenderMetadata;

@interface MEMessage : NSObject <NSCopying, EFPubliclyDescribable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MEMessageRecipients *recipients;
@property (nonatomic) long long signatureState;
@property (retain, nonatomic) MEMessageSenderMetadata *senderMetadata;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long encryptionState;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) MEEmailAddress *fromAddress;
@property (readonly, copy, nonatomic) NSArray *toAddresses;
@property (readonly, copy, nonatomic) NSArray *ccAddresses;
@property (readonly, copy, nonatomic) NSArray *bccAddresses;
@property (readonly, copy, nonatomic) NSArray *replyToAddresses;
@property (readonly, copy, nonatomic) NSArray *allRecipientAddresses;
@property (readonly, copy, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSDictionary *headers;
@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_protectedHeaders;
+ (BOOL)extensionCanSetHeaderKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(long long)a0 encryptionState:(long long)a1 signatureState:(long long)a2 subject:(id)a3 recipients:(id)a4 from:(id)a5 dataSent:(id)a6 dateReceived:(id)a7 headers:(id)a8 rawData:(id)a9 senderMetadata:(id)a10;
- (id)_sanitaizedHeadersForHeaders:(id)a0;

@end
