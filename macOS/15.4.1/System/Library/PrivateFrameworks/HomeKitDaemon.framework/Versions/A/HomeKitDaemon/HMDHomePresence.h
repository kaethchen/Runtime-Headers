@class NSArray, NSDictionary, NSString, HMDHome, HMDDevice;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresence>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice;
@property (readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMDHome *home;

+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)initWithHome:(id)a0 userPresenceMap:(id)a1 lastUpdateByDevice:(id)a2;
- (BOOL)isNoUserAtHome;
- (BOOL)isPresenceRegionKnownForUser:(id)a0;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;

@end
