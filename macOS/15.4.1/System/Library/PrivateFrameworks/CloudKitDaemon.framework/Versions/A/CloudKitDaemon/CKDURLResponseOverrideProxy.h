@class NSDictionary, NSHTTPURLResponse;

@interface CKDURLResponseOverrideProxy : NSProxy {
    NSHTTPURLResponse *_realResponse;
    long long _statusCode;
    NSDictionary *_responseHeaderOverrides;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (long long)statusCode;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)allHeaderFields;
- (id)initWithResponse:(id)a0 overrides:(id)a1;

@end
