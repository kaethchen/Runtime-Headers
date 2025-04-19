@class NSObject;
@protocol OS_os_log;

@interface CalDrawLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;

@end
