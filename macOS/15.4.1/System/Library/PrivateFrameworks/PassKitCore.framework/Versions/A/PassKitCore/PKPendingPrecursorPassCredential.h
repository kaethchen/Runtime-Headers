@class NSString;

@interface PKPendingPrecursorPassCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (BOOL)representsPass:(id)a0;
- (id)initForDatabase;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithPrecursorCredential:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
