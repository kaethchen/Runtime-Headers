@class NSObject;
@protocol CNCDDatabaseRemoval, OS_os_log;

@interface CNCDDatabaseRemoval : NSObject

@property (class, readonly, nonatomic) id<CNCDDatabaseRemoval> xpcRemover;
@property (class, readonly, nonatomic) id<CNCDDatabaseRemoval> inProcessRemover;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@end
