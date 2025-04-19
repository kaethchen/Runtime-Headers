@class NSString, NSDate;

@interface _AMiCalTodo : _AMiCalItem

@property (copy) NSDate *completionDate;
@property (copy) NSDate *dueDate;
@property int priority;
@property (readonly) long long sequence;
@property (readonly, copy) NSDate *stampDate;
@property (copy) NSString *summary;
@property (copy) NSString *objectDescription;
@property (readonly, copy) NSString *uid;
@property (copy) NSString *url;

- (id)displayAlarms;
- (id)mailAlarms;
- (id)openFileAlarms;
- (id)soundAlarms;

@end
