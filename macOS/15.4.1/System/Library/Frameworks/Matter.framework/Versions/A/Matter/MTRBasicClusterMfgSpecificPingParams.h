@class NSNumber;

@interface MTRBasicClusterMfgSpecificPingParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id *)a0;

@end
