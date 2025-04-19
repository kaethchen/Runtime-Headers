@class NSString;

@interface EWSRecurringMasterItemIdType : EWSBaseItemIdType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *OccurrenceId;
@property (copy, nonatomic) NSString *ChangeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)definition;

@end
