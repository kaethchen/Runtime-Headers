@class NSString, IDSURI, NSData;

@interface IDSOffGridMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) IDSURI *senderURI;
@property (readonly, nonatomic) NSData *message;
@property (readonly, nonatomic) IDSURI *recipientURI;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryMessage:(id)a0;
- (id)initWithMessage:(id)a0 senderURI:(id)a1 recipientURI:(id)a2;

@end
