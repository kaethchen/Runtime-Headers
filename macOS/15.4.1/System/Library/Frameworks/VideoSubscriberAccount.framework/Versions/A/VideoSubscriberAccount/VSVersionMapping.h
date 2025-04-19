@class NSString;

@interface VSVersionMapping : NSObject

@property (readonly, nonatomic) NSString *iOSSupportVersion;

+ (id)sharedInstance;
+ (id)systemVersion;

- (id)init;
- (void).cxx_destruct;

@end
