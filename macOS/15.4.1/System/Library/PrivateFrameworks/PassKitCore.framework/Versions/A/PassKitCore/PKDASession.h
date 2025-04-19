@class NSString;
@protocol PKSessionDelegate;

@interface PKDASession : NSObject <PKSession> {
    _Atomic unsigned int _sessionState;
}

@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PKSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setState:(unsigned long long)a0;
- (void)endSession;
- (BOOL)startSession;

@end
