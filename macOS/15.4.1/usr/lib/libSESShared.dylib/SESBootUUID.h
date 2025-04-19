@class NSString;

@interface SESBootUUID : NSObject

@property (retain, nonatomic) NSString *bootUUID;

+ (id)getInstance;
+ (id)getBootUUID;
+ (BOOL)isFirstLaunchAfterBootForKey:(id)a0;
+ (void)setFirstLaunchAfterBootDoneForKey:(id)a0;

- (void).cxx_destruct;

@end
