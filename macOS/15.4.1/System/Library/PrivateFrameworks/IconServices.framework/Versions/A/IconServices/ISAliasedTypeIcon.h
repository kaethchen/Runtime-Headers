@class ISIcon;

@interface ISAliasedTypeIcon : ISTypeIcon

@property (readonly) ISIcon *moniker;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 moniker:(id)a1;

@end
