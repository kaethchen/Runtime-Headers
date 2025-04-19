@protocol AMSTimeoutClockSource;

@interface AMSTimeout : NSObject

@property (retain) id<AMSTimeoutClockSource> clockSource;
@property double expirationTimestamp;
@property double timestampAtPreviousQuery;
@property (readonly, getter=hasExpired) BOOL expired;

+ (id)timeoutWithExpiration:(double)a0;

- (void).cxx_destruct;
- (id)initWithExpiration:(double)a0 clockSource:(id)a1;

@end
