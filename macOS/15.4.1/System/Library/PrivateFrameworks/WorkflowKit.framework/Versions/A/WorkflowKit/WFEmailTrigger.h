@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedAccountIdentifiers;
@property (retain, nonatomic) NSArray *selectedAccountDescriptions;
@property (retain, nonatomic) NSString *selectedSubject;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (retain, nonatomic) NSArray *selectedSenders;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)mailBlue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;

@end
