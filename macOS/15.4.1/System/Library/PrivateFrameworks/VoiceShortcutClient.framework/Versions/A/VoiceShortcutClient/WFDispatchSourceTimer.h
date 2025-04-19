@class RBSAssertion, NSObject;
@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject

@property (nonatomic) BOOL hasFired;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (retain, nonatomic) RBSAssertion *assertion;
@property (nonatomic) BOOL preventSuspension;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isCancelled;
- (id)initWithInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithInterval:(double)a0 repeatInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithInterval:(double)a0 repeatIntervalInt:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
