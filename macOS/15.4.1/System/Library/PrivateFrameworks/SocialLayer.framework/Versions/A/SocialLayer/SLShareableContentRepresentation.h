@class NSString;

@interface SLShareableContentRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) long long preferredRepresentation;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIdentifier:(id)a0 preferredRepresentation:(long long)a1;

@end
