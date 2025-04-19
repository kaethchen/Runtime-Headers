@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;

@end
