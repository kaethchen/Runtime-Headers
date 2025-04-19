@class ATXMotion, NSDate;

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}

@property (readonly, copy, nonatomic) ATXMotion *currentMotion;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (BOOL)isExpired;
- (id)initWithATXMotion:(id)a0;

@end
