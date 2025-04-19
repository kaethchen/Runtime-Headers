@class NSString;

@interface IMKExtensionIM : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionDelegate;

- (void)beginRequestWithExtensionContext:(id)a0;

@end
