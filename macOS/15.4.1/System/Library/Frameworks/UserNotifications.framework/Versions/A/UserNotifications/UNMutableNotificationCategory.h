@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property unsigned long long options;
@property (copy) NSArray *actions;
@property (copy) NSArray *minimalActions;
@property (copy) NSArray *intentIdentifiers;
@property (copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy) NSString *categorySummaryFormat;
@property (copy) NSString *actionsMenuTitle;
@property (copy) UNNotificationAction *alternateAction;
@property unsigned long long backgroundStyle;
@property unsigned long long listPriority;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)setActions:(id)a0;
- (void)setBackgroundStyle:(unsigned long long)a0;
- (void)setActionsMenuTitle:(id)a0;
- (void)setAlternateAction:(id)a0;
- (void)setCategorySummaryFormat:(id)a0;
- (void)setHiddenPreviewsBodyPlaceholder:(id)a0;
- (void)setIntentIdentifiers:(id)a0;
- (void)setListPriority:(unsigned long long)a0;
- (void)setMinimalActions:(id)a0;

@end
