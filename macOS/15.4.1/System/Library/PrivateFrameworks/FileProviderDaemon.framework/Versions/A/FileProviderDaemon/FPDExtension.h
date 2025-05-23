@class NSString, LSApplicationExtensionRecord, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate> {
    LSApplicationExtensionRecord *_extensionRecord;
}

@property (readonly, nonatomic) LSApplicationExtensionRecord *extensionRecord;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocForIdentifier:(id)a0;
+ (id)instanceWithExtensionRecord:(id)a0 queue:(id)a1 server:(id)a2;
+ (id)instanceWithExtensionRecord:(id)a0 queue:(id)a1 volumeManager:(id)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (id)customPushTopics;
- (id)asAppExtensionBackedProvider;
- (void)didReceiveMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithExtensionRecord:(id)a0 queue:(id)a1 server:(id)a2 volumeManager:(id)a3;
- (BOOL)isAppExtensionReachable;
- (void)removeTrashedItemsOlderThanDate:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;

@end
