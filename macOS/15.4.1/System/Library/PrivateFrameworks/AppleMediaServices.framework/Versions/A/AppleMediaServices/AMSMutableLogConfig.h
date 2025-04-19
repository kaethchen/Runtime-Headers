@class NSString;

@interface AMSMutableLogConfig : AMSLogConfig <NSCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;

@end
