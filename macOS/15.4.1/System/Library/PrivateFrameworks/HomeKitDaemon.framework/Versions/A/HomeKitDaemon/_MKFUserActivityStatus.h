@class Protocol, NSUUID, _MKFUser, MKFUserActivityStatusDatabaseID, NSDate, NSNumber, NSString;
@protocol MKFUser, MKFGuest;

@interface _MKFUserActivityStatus : _MKFModel <MKFUserActivityStatus, MKFUserActivityStatusPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSDate *lastReportTimestamp;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSDate *statusChangedTimestamp;
@property (copy, nonatomic) NSNumber *statusChangeReason;
@property (copy, nonatomic) NSDate *transitionTimestamp;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFUser *user;
@property (copy, nonatomic) NSDate *lastReportTimestamp;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *statusChangeReason;
@property (copy, nonatomic) NSDate *statusChangedTimestamp;
@property (copy, nonatomic) NSDate *transitionTimestamp;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFUserActivityStatusDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfUserActivityStatus;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
