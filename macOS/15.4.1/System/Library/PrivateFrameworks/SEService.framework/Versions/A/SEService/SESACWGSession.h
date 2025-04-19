@class NSString;
@protocol SESACWGSessionDelegate;

@interface SESACWGSession : SESSession <SESACWGSessionCallbackInterface>

@property (weak, nonatomic) id<SESACWGSessionDelegate> delegate;
@property (readonly, nonatomic) NSString *aid;
@property (readonly, nonatomic) NSString *activeKeyIdentifier;
@property (readonly, nonatomic) BOOL supportsSecureRanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstance;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(double)a1 withAppletIdentifier:(id)a2;
+ (id)resumeRangingForReaderIdentifier:(id)a0 withAppletIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (void)endSession;
- (void)didStartSession:(id)a0;
- (id)setActiveKey:(id)a0;
- (void)didEndUnexpectedly:(id)a0;
- (id)disableBluetooth:(BOOL)a0;
- (id)setSecureElementToken:(id)a0;

@end
