@class NSString;

@interface MSVSonicAssertionObserver : NSObject <RBSAssertionObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;

@end
