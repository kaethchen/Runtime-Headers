@class NSUUID, NSString;
@protocol SHSessionDriverDelegate;

@interface SHManagedSessionCustomCatalogDriverDaemonDelegate : NSObject <SHMatcherDelegate>

@property (readonly) NSUUID *matchingSignatureID;
@property (readonly) NSUUID *inflightRequestID;
@property (weak) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;

@end
