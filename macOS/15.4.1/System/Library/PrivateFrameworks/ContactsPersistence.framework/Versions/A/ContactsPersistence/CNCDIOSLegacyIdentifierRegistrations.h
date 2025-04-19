@class NSIndexSet;

@interface CNCDIOSLegacyIdentifierRegistrations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSIndexSet *contactIdentifierSet;
@property (readonly, nonatomic) NSIndexSet *groupIdentifierSet;
@property (readonly, nonatomic) NSIndexSet *containerIdentifierSet;
@property (readonly, nonatomic) NSIndexSet *infoIdentifierSet;
@property (readonly, nonatomic) NSIndexSet *multivalueIdentifierSet;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifiers:(id)a0 groupIdentifiers:(id)a1 containerIdentifiers:(id)a2 infoIdentifiers:(id)a3 multivalueIdentifiers:(id)a4;

@end
