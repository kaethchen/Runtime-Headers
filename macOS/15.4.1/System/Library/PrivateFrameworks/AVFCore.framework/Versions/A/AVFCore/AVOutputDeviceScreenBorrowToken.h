@class NSString;

@interface AVOutputDeviceScreenBorrowToken : NSObject {
    struct OpaqueFigEndpoint { } *_endpoint;
}

@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *reason;

- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint { } *)a0 client:(id)a1 reason:(id)a2;

@end
