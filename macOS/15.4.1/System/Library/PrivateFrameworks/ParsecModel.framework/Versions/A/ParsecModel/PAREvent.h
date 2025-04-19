@class NSDate;

@interface PAREvent : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
