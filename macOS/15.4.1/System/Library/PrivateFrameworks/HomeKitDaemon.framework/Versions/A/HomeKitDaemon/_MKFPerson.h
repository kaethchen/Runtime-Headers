@class Protocol, NSUUID, NSString, MKFPersonDatabaseID, NSDate;

@interface _MKFPerson : _MKFModel <MKFPerson, MKFPersonPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) MKFPersonDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfPerson;
- (id)createHMPerson;
- (void)updateWithHMPerson:(id)a0;

@end
