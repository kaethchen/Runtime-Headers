@class NSObject, MAUSBManagementPacket;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MAUSBOutstandingManagmentRequest : MAUSBObject {
    unsigned int _timeoutMS;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    id /* block */ _timeoutBlock;
}

@property (readonly) MAUSBManagementPacket *packet;
@property (readonly) unsigned int timeoutCount;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)startTimer;
- (void)timerFired;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPacket:(id)a0 queue:(id)a1 timeoutMS:(unsigned int)a2 completion:(id /* block */)a3 timeoutBlock:(id /* block */)a4;

@end
