@class BTAudioSession, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioRoutingArbiter : NSObject {
    BTAudioSession *_bluetoothAudioSession;
}

@property (class, readonly, nonatomic) AVAudioRoutingArbiter *sharedRoutingArbiter;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)beginArbitrationWithAudioSessionCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)beginArbitrationWithAudioSessionCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)beginArbitrationWithBTSessionCategory:(int)a0 mode:(int)a1 flags:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (void)beginArbitrationWithCategory:(long long)a0 completionHandler:(id /* block */)a1;
- (void)createBTSessionWithCategory:(int)a0 mode:(int)a1 flags:(unsigned int)a2;
- (void)leaveArbitration;

@end
