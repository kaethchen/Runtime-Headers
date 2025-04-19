@class NSObject;
@protocol OS_os_log;

@interface SocialAppsCore : NSObject

@property (class, readonly) NSObject<OS_os_log> *notifications;
@property (class, readonly) NSObject<OS_os_log> *search;
@property (class, readonly) NSObject<OS_os_log> *archiving;
@property (class, readonly) NSObject<OS_os_log> *unreadCount;
@property (class, readonly) NSObject<OS_os_log> *performance;
@property (class, readonly) NSObject<OS_os_log> *recipientsBar;

@end
