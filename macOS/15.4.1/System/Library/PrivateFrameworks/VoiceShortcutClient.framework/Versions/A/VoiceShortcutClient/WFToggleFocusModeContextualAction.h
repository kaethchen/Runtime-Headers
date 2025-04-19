@class WFToggleFocusModeContextualActionFocusMode, WFContextualActionCalendarEventDescriptor;

@interface WFToggleFocusModeContextualAction : WFContextualAction

@property (readonly, nonatomic) WFToggleFocusModeContextualActionFocusMode *focusMode;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) WFContextualActionCalendarEventDescriptor *eventDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)toggle:(id)a0;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;
+ (id)turnOn:(id)a0;
+ (id)turnOff:(id)a0;
+ (id)turnOn:(id)a0 untilEventEnds:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)displayStringFromOperation:(unsigned long long)a0 isDND:(BOOL)a1 focusMode:(id)a2 eventDescriptor:(id)a3;
- (id)initWithFocusMode:(id)a0 operation:(unsigned long long)a1 event:(id)a2;
- (id)spotlightItem;

@end
