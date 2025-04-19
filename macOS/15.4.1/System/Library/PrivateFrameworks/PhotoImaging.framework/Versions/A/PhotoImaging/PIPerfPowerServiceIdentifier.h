@interface PIPerfPowerServiceIdentifier : NSObject

@property (readonly, nonatomic) struct PPSTelemetryIdentifier { } *telemetryId;

+ (id)genEditIdentifier;

- (id)init;
- (id)initWithIdentifier:(struct PPSTelemetryIdentifier { } *)a0;

@end
