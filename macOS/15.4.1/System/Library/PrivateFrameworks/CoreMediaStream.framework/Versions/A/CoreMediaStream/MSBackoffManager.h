@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSSecureCoding> {
    NSDate *_nextExpiryDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) id<MSBackoffManagerDelegate> delegate;
@property (nonatomic) double initialInterval;
@property (nonatomic) double backoffFactor;
@property (nonatomic) double randomizeFactor;
@property (nonatomic) double maxBackoffInterval;
@property (nonatomic) double currentInterval;
@property (retain) NSDate *nextExpiryDate;
@property (retain) NSDate *retryAfterDate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)backoff;
- (void)_complainAboutMissingKeyInArchive:(id)a0;
- (id)copyParameters;
- (void)didReceiveRetryAfterDate:(id)a0;
- (id)initWithInitialInterval:(double)a0 backoffFactor:(double)a1 randomizeFactor:(double)a2 maxBackoffInterval:(double)a3 retryAfterDate:(id)a4;

@end
