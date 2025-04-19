@class NWURLSessionDelegateWrapper, NSObject;
@protocol OS_nw_protocol_metadata;

@interface _NWHTTPConnectionInfo : NSObject {
    NSObject<OS_nw_protocol_metadata> *_connectionMetadata;
    NWURLSessionDelegateWrapper *_delegateWrapper;
}

@property (readonly) BOOL isValid;

+ (BOOL)isSubclassOfClass:(Class)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)sendPingWithReceiveHandler:(id /* block */)a0;

@end
