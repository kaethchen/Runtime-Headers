@class NSObject;
@protocol OS_os_log;

@interface SocialUI : NSObject

@property (class, readonly) NSObject<OS_os_log> *autocomplete;
@property (class, readonly) NSObject<OS_os_log> *details;
@property (class, readonly) NSObject<OS_os_log> *inputLine;
@property (class, readonly) NSObject<OS_os_log> *transcript;
@property (class, readonly) NSObject<OS_os_log> *facetime;

@end
