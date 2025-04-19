@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>

@property (readonly, weak, nonatomic) EKReminderStore *reminderStore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithReminderStore:(id)a0;

@end
