@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)description;
- (void).cxx_destruct;
- (id)code;
- (id)domain;
- (id)userInfo;
- (id)failureReason;
- (id)underlyingError;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
