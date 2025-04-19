@class NSDictionary;

@interface LNConfirmationResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) NSDictionary *updates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 context:(id)a1 confirmed:(BOOL)a2 updates:(id)a3;

@end
