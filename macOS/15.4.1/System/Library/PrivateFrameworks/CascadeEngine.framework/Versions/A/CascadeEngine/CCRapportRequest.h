@class NSUUID, NSArray, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;

@interface CCRapportRequest : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long syncReason;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (retain, nonatomic) NSArray *setUUIDsSupportingSync;
@property (retain, nonatomic) NSArray *resolvedSetsToSync;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableSet *deliveredToDevices;
@property (retain, nonatomic) NSMutableSet *inFlightToDevices;
@property (retain, nonatomic) NSMutableDictionary *errorFromDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *requestTimeout;
@property (copy, nonatomic) id /* block */ requestTimeoutHandler;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 reason:(unsigned long long)a1 activity:(id)a2 setUUIDsSupportingSync:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)markAsDeliveredToDevice:(id)a0 withError:(id)a1;
- (void)markAsInFlightToDevice:(id)a0;
- (void)requestTimeoutDidFire;
- (void)startRequestTimeout;
- (void)stopRequestTimeout;

@end
