@class NSString, NSObject;
@protocol OS_os_log;

@interface SUCoreLog : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_os_log> *oslog;
@property (readonly, retain, nonatomic) NSString *category;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;

@end
