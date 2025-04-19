@class NSObject;
@protocol OS_os_log;

@interface CNCDDatabasePreparation : NSObject

@property (class, readonly) NSObject<OS_os_log> *os_log;

+ (id)cachingPreparer;
+ (id)cachingPreparerWrappingPreparer:(id)a0 timeProvider:(id)a1;
+ (id)preparer;

@end
