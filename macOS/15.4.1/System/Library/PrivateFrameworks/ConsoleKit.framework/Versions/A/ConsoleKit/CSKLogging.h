@class NSObject;
@protocol OS_os_log;

@interface CSKLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *deviceHandle;
@property (class, readonly) NSObject<OS_os_log> *deviceManagerHandle;
@property (class, readonly) NSObject<OS_os_log> *directoryObserverHandle;
@property (class, readonly) NSObject<OS_os_log> *fileObserverHandle;
@property (class, readonly) NSObject<OS_os_log> *fileTailObserverHandle;
@property (class, readonly) NSObject<OS_os_log> *fileSystemHandle;
@property (class, readonly) NSObject<OS_os_log> *coalescerHandle;
@property (class, readonly) NSObject<OS_os_log> *streamHandle;
@property (class, readonly) NSObject<OS_os_log> *streamSourceHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDeviceSourceHandle;
@property (class, readonly) NSObject<OS_os_log> *streamArchiveSourceHandle;
@property (class, readonly) NSObject<OS_os_log> *streamASLSourceHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDataHandle;
@property (class, readonly) NSObject<OS_os_log> *streamTasksSchedulerHandle;
@property (class, readonly) NSObject<OS_os_log> *streamTaskOperationHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDataTaskHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDataDirectionModifierTaskHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDataRemovalTaskHandle;
@property (class, readonly) NSObject<OS_os_log> *streamDataAdditionTaskHandle;
@property (class, readonly) NSObject<OS_os_log> *streamObserverTaskHandle;
@property (class, readonly) NSObject<OS_os_log> *streamFiltersPredicateHandle;

@end
