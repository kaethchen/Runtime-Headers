@class NSString, NSDate, NSNumber, FBKFormResponseStub;

@interface FBKFilePromiseStub : FBKManagedFeedbackObject <FBKDownloadableFilePromise>

@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *remoteID;
@property (nonatomic) long long statusEnum;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) FBKFormResponseStub *formResponseStub;
@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *createdAtDate;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)fetchRequest;

@end
