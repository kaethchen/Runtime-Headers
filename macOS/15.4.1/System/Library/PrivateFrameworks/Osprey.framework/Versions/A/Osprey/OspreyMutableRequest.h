@class NSString, NSMutableDictionary;

@interface OspreyMutableRequest : NSObject {
    NSMutableDictionary *_additionalHeaders;
}

@property (readonly, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *clientTraceIdentifier;
@property (nonatomic) BOOL enableDeviceAuthentication;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled;
@property (nonatomic) BOOL forceHTTPv2;
@property (nonatomic) BOOL requireAbsintheAuthentication;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)buildInternalRequest;
- (id)initWithMethodName:(id)a0;

@end
