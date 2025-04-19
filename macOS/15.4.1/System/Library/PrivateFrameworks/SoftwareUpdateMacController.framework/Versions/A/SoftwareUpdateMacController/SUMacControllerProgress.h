@class NSString;

@interface SUMacControllerProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *phase;
@property (readonly, nonatomic) BOOL isStalled;
@property (readonly, nonatomic) float portionComplete;
@property (readonly, nonatomic) long long totalWrittenBytes;
@property (readonly, nonatomic) long long totalExpectedBytes;
@property (readonly, nonatomic) double estimatedTimeRemaining;

+ (id)nameForProgressState:(int)a0;
+ (id)_progressStateForControllerStateTable;
+ (int)progressStateForControllerState:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isReady;
- (BOOL)isDownloaded;
- (BOOL)isDownloading;
- (BOOL)isLoading;
- (BOOL)isPrepared;
- (int)stateForProgress;
- (id)initFromSUCoreProgress:(id)a0;
- (id)initWithPhase:(id)a0 isStalled:(BOOL)a1 portionComplete:(float)a2 remaining:(double)a3;
- (id)initWithPhase:(id)a0 isStalled:(BOOL)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5;
- (BOOL)isApplied;
- (BOOL)isApplying;
- (BOOL)isCancelling;
- (BOOL)isPreflighted;
- (BOOL)isPreparing;
- (BOOL)isStartingUp;

@end
