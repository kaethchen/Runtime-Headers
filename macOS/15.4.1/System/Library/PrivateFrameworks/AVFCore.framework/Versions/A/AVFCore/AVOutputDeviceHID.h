@class NSString;

@interface AVOutputDeviceHID : NSObject {
    long long _inputMode;
    struct OpaqueFigEndpoint { } *_endpoint;
}

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *screenID;
@property (nonatomic) long long inputMode;

- (void)dealloc;
- (id)initWithUUID:(id)a0 screenUUID:(id)a1 endpoint:(struct OpaqueFigEndpoint { } *)a2;

@end
