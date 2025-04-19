@class NSString, NSMutableArray;
@protocol HMMLogEventSubmitting;

@interface HMMBufferingLogEventSubmitter : NSObject <HMMLogEventSubmitting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _bufferSize;
    NSMutableArray *_bufferedLogEvents;
    id<HMMLogEventSubmitting> _submitter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;
- (id)initWithBufferSize:(long long)a0;
- (void)processLogEventsWithSubmitter:(id)a0;
- (void)submitLogEvent:(id)a0 error:(id)a1;

@end
