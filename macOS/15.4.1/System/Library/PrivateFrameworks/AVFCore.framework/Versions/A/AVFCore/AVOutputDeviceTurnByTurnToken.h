@interface AVOutputDeviceTurnByTurnToken : NSObject {
    struct OpaqueFigEndpoint { } *_endpoint;
}

- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint { } *)a0;

@end
