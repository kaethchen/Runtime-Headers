@class NSDictionary, NSDate;

@interface PIPerfPowerRecord : NSObject

@property (nonatomic) struct PPSTelemetryIdentifier { } *identifier;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;

@end
