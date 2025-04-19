@class NSString, NSUUID, BlastDoorLiteTapback;

@interface BlastDoorLiteTextMessage : NSObject {
    void /* unknown type, empty encoding */ liteTextMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) long long effect;
@property (nonatomic, readonly) NSUUID *threadOriginatorUUID;
@property (nonatomic, readonly) BlastDoorLiteTapback *tapback;

- (id)init;
- (void).cxx_destruct;

@end
