@class NSUUID, NSString, NSDate;

@interface RPLReplicatorDevice : NSObject

@property (readonly, copy, nonatomic) NSUUID *deviceID;
@property (readonly, copy, nonatomic) NSUUID *relationshipID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *initialDiscoveryDate;
@property (readonly, nonatomic) unsigned long long deviceType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 relationshipID:(id)a1 name:(id)a2 deviceType:(unsigned long long)a3 initialDiscoveryDate:(id)a4;

@end
