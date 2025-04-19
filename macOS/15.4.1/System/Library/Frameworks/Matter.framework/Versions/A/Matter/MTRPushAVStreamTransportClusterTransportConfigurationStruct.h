@class NSNumber, MTRPushAVStreamTransportClusterTransportOptionsStruct;

@interface MTRPushAVStreamTransportClusterTransportConfigurationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *connectionID;
@property (copy, nonatomic) NSNumber *transportStatus;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterTransportOptionsStruct *transportOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
