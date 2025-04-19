@class NSSet, NSUUID;
@protocol HMIHomePersonManagerDataSource;

@interface HMIAssociateFaceCropsOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly, copy) NSSet *faceCropUUIDs;
@property (readonly, copy) NSUUID *personUUID;
@property (readonly) long long source;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0 faceCropUUIDs:(id)a1 personUUID:(id)a2 source:(long long)a3;
- (void)mainInsideAutoreleasePool;

@end
