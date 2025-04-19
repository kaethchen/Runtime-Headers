@class NSError, NSArray;

@interface MEOutgoingMessageEncodingStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldSign;
@property (readonly, nonatomic) BOOL shouldEncrypt;
@property (readonly, nonatomic) BOOL canSign;
@property (readonly, nonatomic) BOOL canEncrypt;
@property (readonly, copy, nonatomic) NSError *securityError;
@property (readonly, copy, nonatomic) NSArray *addressesFailingEncryption;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCanSign:(BOOL)a0 canEncrypt:(BOOL)a1 securityError:(id)a2 addressesFailingEncryption:(id)a3;
- (id)initWithCanSign:(BOOL)a0 canEncrypt:(BOOL)a1 shouldSign:(BOOL)a2 shouldEncrypt:(BOOL)a3 securityError:(id)a4 addressesFailingEncryption:(id)a5;

@end
