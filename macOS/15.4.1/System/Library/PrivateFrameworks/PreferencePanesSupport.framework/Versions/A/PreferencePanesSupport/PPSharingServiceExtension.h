@class NSString;

@interface PPSharingServiceExtension : NSObject <PPSharingServiceExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (BOOL)isServiceRequiresAdmin;
- (BOOL)wantsAuthorization;

@end
