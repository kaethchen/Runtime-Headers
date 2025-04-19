@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DESDeviceIdentifierStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSMutableDictionary *deviceIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)_readIdentifierStore;
- (void)_writeIdentifierStore;
- (id)identifierForBundleId:(id)a0;
- (id)initWithStoreURL:(id)a0;

@end
