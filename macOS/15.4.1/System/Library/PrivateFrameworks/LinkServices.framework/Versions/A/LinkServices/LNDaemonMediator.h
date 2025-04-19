@class NSString;

@interface LNDaemonMediator : NSObject <LNMediator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getConnectionHostInterfaceForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;


@end
