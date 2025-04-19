@class NSObject;
@protocol OS_os_log;

@interface WMLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *networkingRawXML;

@end
