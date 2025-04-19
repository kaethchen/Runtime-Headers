@class NSNumber, LNValue, NSDictionary;

@interface LNDisambiguationResponse : LNResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *selectedIndex;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) NSDictionary *updates;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 context:(id)a1 selectedIndex:(id)a2 value:(id)a3 updates:(id)a4;

@end
