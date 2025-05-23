@class NSArray;

@interface SAAlarmDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *alarmIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
