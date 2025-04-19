@class NSObject;
@protocol OS_os_log;

@interface CESLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;

@end
