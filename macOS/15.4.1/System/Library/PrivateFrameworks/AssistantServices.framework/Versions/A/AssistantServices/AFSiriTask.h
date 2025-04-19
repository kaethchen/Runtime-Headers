@class NSString, AFSiriRequest, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCSecureCoding> {
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)failWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)request;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)_initWithRequest:(id)a0 remoteResponseListenerEndpoint:(id)a1 usageResultListenerEndpoint:(id)a2;
- (void)_invalidateConnectionAfterMessageSent:(id)a0;
- (id)_responseHandlerConnection;
- (id)_usageResultHandlerConnection;
- (void)completeWithResponse:(id)a0;
- (void)reportUsageResult:(id)a0;

@end
