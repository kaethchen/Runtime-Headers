@interface WFBatteryLevelTrigger : WFTrigger

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
