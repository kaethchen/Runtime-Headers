@interface WFArriveLocationTrigger : WFLocationTrigger

+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
