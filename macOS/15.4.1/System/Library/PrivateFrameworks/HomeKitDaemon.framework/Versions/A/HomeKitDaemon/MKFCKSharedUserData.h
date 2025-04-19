@class NSUUID, NSString, NSDate;
@protocol HMDHomeMember;

@interface MKFCKSharedUserData : MKFCKModel {
    id<HMDHomeMember> _workingStoreHomeMember;
}

@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;

+ (id)fetchRequest;
+ (id)rootKeyPath;

- (void).cxx_destruct;
- (id)workingStoreHomeMember;

@end
