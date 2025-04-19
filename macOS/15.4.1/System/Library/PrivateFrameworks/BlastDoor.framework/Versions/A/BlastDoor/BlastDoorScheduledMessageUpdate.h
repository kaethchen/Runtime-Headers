@class NSString, BlastDoorMetadata;

@interface BlastDoorScheduledMessageUpdate : NSObject {
    void /* unknown type, empty encoding */ scheduledMessageUpdate;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) long long scheduleState;

- (id)init;
- (void).cxx_destruct;

@end
