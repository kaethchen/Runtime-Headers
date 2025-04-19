@class NSArray;

@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) unsigned long long availability;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 suggestions:(id)a1 availability:(unsigned long long)a2;

@end
