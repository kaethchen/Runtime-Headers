@class NSDate, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RTPersistentTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidateTimer;
- (void)_setupNextTimer;
- (void)_startTimer;
- (id)initWithFireDate:(id)a0 interval:(double)a1 serviceIdentifier:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
