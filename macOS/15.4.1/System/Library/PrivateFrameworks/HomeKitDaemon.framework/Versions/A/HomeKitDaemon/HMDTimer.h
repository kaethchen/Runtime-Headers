@class NSString;

@interface HMDTimer : NSObject <HMDTimerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (id)backoffTimerWithMinimumTimeInterval:(double)a0 maximumTimeInterval:(double)a1 exponentialFactor:(long long)a2 options:(unsigned long long)a3;

@end
