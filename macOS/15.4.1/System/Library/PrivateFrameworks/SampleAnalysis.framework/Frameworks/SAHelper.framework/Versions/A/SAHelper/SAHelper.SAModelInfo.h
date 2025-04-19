@class NSArray, NSError, NSDate;

@interface SAHelper.SAModelInfo : NSObject

+ (void)gatherModelInfoWithStartDate:(NSDate *)a0 endDate:(NSDate *)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;

- (id)init;

@end
