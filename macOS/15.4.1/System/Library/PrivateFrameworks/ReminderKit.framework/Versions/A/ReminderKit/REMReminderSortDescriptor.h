@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL ascending;

+ (id)sortDescriptorSortingByCreationDateAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByDueDateAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByOrderingInListAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByPriorityAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByTitleAscending:(BOOL)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 ascending:(BOOL)a1;

@end
