@class NSString, NSUUID, NSDate;

@interface DiagnosticStateMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uuid;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;

@end
