@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject

@property (retain, nonatomic) NSDate *backoffUntil;
@property (nonatomic) long long failureCount;

- (void).cxx_destruct;
- (void)clear;
- (BOOL)failureIntervals:(unsigned long long)a0;
- (BOOL)hasBackedOff;

@end
