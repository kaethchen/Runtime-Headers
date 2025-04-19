@class NSString, _TtC23ImagePlaygroundInternal33GPAppleConnectTokenProvider_Swift;
@protocol GPAppleConnectAuthenticating;

@interface GPAppleConnectTokenProvider : NSObject {
    _TtC23ImagePlaygroundInternal33GPAppleConnectTokenProvider_Swift *_impl;
}

@property (readonly, nonatomic) NSString *token;
@property (retain, nonatomic) id<GPAppleConnectAuthenticating> authenticatingProtocol;

- (void).cxx_destruct;
- (id)initWithAuthenticatingProtocol:(id)a0;
- (void)setupTokenWithCompletion:(id /* block */)a0;

@end
