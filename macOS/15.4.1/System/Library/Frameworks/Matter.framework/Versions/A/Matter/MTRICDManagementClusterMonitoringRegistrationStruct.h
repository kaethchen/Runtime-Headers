@class NSNumber;

@interface MTRICDManagementClusterMonitoringRegistrationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *checkInNodeID;
@property (copy, nonatomic) NSNumber *monitoredSubject;
@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
