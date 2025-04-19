@class NSString;

@interface EDClientResumer : NSObject <EDResumable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithClientBundleIdentifier:(id)a0 hookRegistry:(id)a1 clientState:(id)a2;
- (void)resumeForUpdates;

@end
