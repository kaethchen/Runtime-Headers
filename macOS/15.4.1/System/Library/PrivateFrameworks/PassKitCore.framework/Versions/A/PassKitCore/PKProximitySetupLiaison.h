@interface PKProximitySetupLiaison : NSObject {
    id /* block */ _startTransferAuthorization;
    id /* block */ _endTransferAuthorization;
}

- (void).cxx_destruct;
- (void)endTransferAuthorization;
- (id)initWithStartTransferAuthorization:(id /* block */)a0 endTransferAuthorization:(id /* block */)a1;
- (void)startTransferAuthorization;

@end
