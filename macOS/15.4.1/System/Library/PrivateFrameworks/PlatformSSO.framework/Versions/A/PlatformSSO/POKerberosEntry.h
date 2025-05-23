@class NSString, NSData;

@interface POKerberosEntry : NSObject

@property (retain) NSString *ticketKeyPath;
@property (retain, nonatomic) NSData *messageBuffer;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *clientName;
@property (nonatomic) int encryptionKeyType;
@property (retain, nonatomic) NSData *sessionKey;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)hasAllRequiredValues;

@end
