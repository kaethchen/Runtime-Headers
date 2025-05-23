@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedPassIdentifiers;
@property (readonly, nonatomic) BOOL shouldIgnoreField;
@property (readonly, nonatomic) BOOL foundExplicitlyRequestedPass;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssociatedPassIdentifiers:(id)a0 shouldIgnoreField:(BOOL)a1 foundExplicitlyRequestedPass:(BOOL)a2;

@end
