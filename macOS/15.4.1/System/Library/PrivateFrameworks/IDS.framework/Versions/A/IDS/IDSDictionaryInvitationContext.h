@class NSString, NSDictionary;

@interface IDSDictionaryInvitationContext : NSObject <IDSInvitationContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *schemaIdentifier;
@property (readonly) long long contextType;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)payload;
- (id)initWithDictionary:(id)a0 schema:(id)a1;

@end
