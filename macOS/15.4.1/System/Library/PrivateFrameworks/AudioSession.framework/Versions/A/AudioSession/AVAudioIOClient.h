@class AVAudioIOController;

@interface AVAudioIOClient : NSObject {
    AVAudioIOController *_ioController;
}

@property (nonatomic) struct shared_ptr<as::client::IOClient> { struct IOClient *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (readonly, weak, nonatomic) AVAudioIOController *IOController;
@property (readonly, nonatomic) BOOL outputEnabled;
@property (readonly, nonatomic) BOOL inputEnabled;
@property (copy, nonatomic) id /* block */ IOEventBlock;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)startAndReturnError:(id *)a0;
- (void)stop;
- (BOOL)startAsyncAndReturnError:(id *)a0 completionHandler:(id /* block */)a1;
- (id)initWithIOController:(id)a0 impl:(struct shared_ptr<as::client::IOClient> { struct IOClient *x0; struct __shared_weak_count *x1; })a1;
- (BOOL)startWithoutWaitingAndReturnError:(id *)a0;

@end
