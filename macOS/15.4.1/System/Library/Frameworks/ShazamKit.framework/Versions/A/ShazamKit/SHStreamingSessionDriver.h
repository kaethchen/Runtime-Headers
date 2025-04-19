@class NSUUID, SHSignatureMetrics, NSString, NSDate, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver>

@property (retain) NSDate *intermissionDeadline;
@property double currentRequiredDuration;
@property (retain) SHSignatureBuffer *signatureBuffer;
@property (readonly) SHSignatureMetrics *metrics;
@property (retain) NSUUID *matchingSignatureID;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (weak) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canPerformMatch;
- (void)flow:(id)a0 time:(id)a1;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2 musicalFeaturesConfiguration:(id)a3;
- (id)initWithSignatureBuffer:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)receivedSignature:(id)a0 retry:(double)a1 offset:(double)a2 intermission:(double)a3 dropCurrentSignature:(BOOL)a4;
- (id)signatureForMatching;

@end
