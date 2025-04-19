@class NSUUID, NSString, HMAccessoryCategory, NSError;

@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo>

@property (copy) NSUUID *accessoryUUID;
@property (copy) NSString *accessoryIDSIdentifier;
@property (copy) HMAccessoryCategory *accessoryCategory;
@property (copy) NSString *setupClientBundleID;
@property (readonly) unsigned long long startTime;
@property (readonly) unsigned long long endTime;
@property (readonly, copy) NSError *sessionError;
@property (readonly) long long role;
@property (readonly, copy) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 role:(long long)a3 accessoryUUID:(id)a4 accessoryCategory:(id)a5 accessoryIDSIdentifier:(id)a6 setupClientBundleID:(id)a7;

@end
