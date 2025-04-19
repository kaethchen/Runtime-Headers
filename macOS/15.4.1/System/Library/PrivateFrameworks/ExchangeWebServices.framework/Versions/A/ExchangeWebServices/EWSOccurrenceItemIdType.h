@class NSString;

@interface EWSOccurrenceItemIdType : EWSBaseItemIdType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *RecurringMasterId;
@property (copy, nonatomic) NSString *ChangeKey;
@property (nonatomic) long long InstanceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)definition;

@end
