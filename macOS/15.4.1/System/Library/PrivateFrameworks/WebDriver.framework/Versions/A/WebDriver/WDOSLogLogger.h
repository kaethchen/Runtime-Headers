@class NSString, NSObject;
@protocol OS_os_log;

@interface WDOSLogLogger : DDAbstractLogger <DDLogger> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
