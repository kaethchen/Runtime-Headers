@interface WebCache : NSObject

+ (void)initialize;
+ (id)statistics;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (void)empty;
+ (void)clearCachedCredentials;

@end
