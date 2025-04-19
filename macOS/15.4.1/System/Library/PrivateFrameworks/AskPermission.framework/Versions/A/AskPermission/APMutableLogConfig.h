@class NSString;

@interface APMutableLogConfig : APLogConfig <NSCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;

@end
