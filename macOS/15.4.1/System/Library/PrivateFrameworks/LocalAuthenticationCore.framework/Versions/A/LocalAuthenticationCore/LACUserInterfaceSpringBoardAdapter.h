@class NSString;

@interface LACUserInterfaceSpringBoardAdapter : NSObject <LACUserInterface> {
    NSString *_bundleId;
    NSString *_configurationId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)terminateWithReason:(id)a0;
- (id)initWithBundleId:(id)a0 configurationId:(id)a1;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
