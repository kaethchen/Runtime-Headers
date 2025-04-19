@class NSString;

@interface CHSWidgetRelevanceGroupAttribute : CHSWidgetRelevanceAttribute

@property (class, readonly, nonatomic) CHSWidgetRelevanceGroupAttribute *ungrouped;

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) unsigned long long groupType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamedGroupIdentifier:(id)a0;
- (id)initWithNamedGroupIdentifier:(id)a0 groupType:(unsigned long long)a1;

@end
