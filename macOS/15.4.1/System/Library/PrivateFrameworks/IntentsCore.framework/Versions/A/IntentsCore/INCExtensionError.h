@class NSError;

@interface INCExtensionError : NSObject

@property long long errorCode;
@property (copy) NSError *underlyingError;

- (void).cxx_destruct;
- (id)initWithErrorCode:(long long)a0 underlyingError:(id)a1;

@end
