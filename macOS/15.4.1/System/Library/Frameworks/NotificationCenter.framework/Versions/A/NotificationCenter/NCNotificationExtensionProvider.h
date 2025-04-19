@class NSString, NSDictionary, NSXPCConnection;

@interface NCNotificationExtensionProvider : NSObject <NCNotificationExtensionProviderServiceProtocol> {
    NSXPCConnection *_hostConnection;
}

@property (readonly) NSString *extensionPointType;
@property (readonly) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupConnection;
- (id)initWithExtensionPoint:(id)a0 userInfo:(id)a1 endPoint:(id)a2;

@end
