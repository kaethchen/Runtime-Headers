@class NSNumber;

@interface MTRPushAVStreamTransportClusterMetadataOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *multiplexing;
@property (copy, nonatomic) NSNumber *includeMotionZones;
@property (copy, nonatomic) NSNumber *enableMetadataPrivacySensitive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
