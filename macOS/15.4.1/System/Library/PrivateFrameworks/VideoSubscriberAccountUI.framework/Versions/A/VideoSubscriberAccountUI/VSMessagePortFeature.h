@class NSString;
@protocol VSMessagePortFeatureDelegate;

@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate>

@property (weak, nonatomic) id<VSMessagePortFeatureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messagePort:(id)a0 didReceiveMessage:(id)a1;

@end
