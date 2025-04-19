@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *associationFailureCause;
@property (copy, nonatomic) NSNumber *associationFailure;
@property (copy, nonatomic) NSNumber *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
