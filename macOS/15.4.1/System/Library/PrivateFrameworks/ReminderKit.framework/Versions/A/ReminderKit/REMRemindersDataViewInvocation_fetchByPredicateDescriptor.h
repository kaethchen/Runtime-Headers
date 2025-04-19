@class NSArray, REMReminderPredicateDescriptor, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByPredicateDescriptor : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMReminderPredicateDescriptor *predicateDescriptor;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) REMReminderFetchOptions *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(id)a2;

@end
