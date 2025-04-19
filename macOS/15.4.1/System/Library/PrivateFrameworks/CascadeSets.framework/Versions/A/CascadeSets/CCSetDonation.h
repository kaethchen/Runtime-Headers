@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CCDonateService;

@interface CCSetDonation : NSObject {
    NSObject<CCDonateService> *_service;
    unsigned short _itemType;
    NSString *_name;
    NSMutableArray *_contentBuffers;
    NSMutableArray *_metaContentBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
}

@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 completion:(id /* block */)a4;
+ (void)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)remoteCRDTSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (void)_setDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 options:(unsigned long long)a5 serviceProvider:(id)a6 queue:(id)a7 timeoutNanos:(unsigned long long)a8 completion:(id /* block */)a9;
+ (void)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (id)donationWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 errorCode:(long long)a3 priorVersion:(unsigned long long)a4;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 completion:(id /* block */)a3;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 serviceProvider:(id)a3 completion:(id /* block */)a4;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 serviceProvider:(id)a4 completion:(id /* block */)a5;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 serviceProvider:(id)a5 completion:(id /* block */)a6;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)finish:(id *)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (BOOL)mergeRemoteDelta:(id)a0 peerDeviceSite:(id)a1 relayedDeviceSites:(id)a2;
- (BOOL)_flushItemsWithError:(id *)a0;
- (BOOL)finishWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 errorCode:(long long)a3 priorVersion:(unsigned long long)a4 flushThreshold:(unsigned long long)a5;
- (BOOL)removeSourceItemIdentifier:(id)a0 error:(id *)a1;

@end
