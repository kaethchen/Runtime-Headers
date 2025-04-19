@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage>

@property (readonly, nonatomic) NSMutableDictionary *recordMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_addNotificationRecord:(id)a0;
- (id)_notificationRecords;
- (void)_removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void)addNotificationRecord:(id)a0;
- (void)addNotificationRecords:(id)a0;
- (id)notificationRecords;
- (void)removeAllNotificationRecords;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;

@end
