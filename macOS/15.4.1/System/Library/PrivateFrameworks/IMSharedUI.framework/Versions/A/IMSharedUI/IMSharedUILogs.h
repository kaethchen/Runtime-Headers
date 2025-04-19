@class NSObject;
@protocol OS_os_log;

@interface IMSharedUILogs : NSObject

@property (class, readonly) NSObject<OS_os_log> *transcript;
@property (class, readonly) NSObject<OS_os_log> *fsm;
@property (class, readonly) NSObject<OS_os_log> *audio;
@property (class, readonly) NSObject<OS_os_log> *utilities;

@end
