@class NSUUID, NSDate;

@interface MapsSyncManagedServerEvaluationStatus : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) BOOL arpStatus;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) BOOL rapStatus;
@property (nonatomic) BOOL reliabilityStatus;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
