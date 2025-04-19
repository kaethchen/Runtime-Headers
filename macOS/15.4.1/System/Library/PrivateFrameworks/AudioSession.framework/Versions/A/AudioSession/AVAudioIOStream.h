@class NSString, NSArray, AVAudioIOController, AVAudioAggregateStreamTopology, AVAudioFormat;

@interface AVAudioIOStream : NSObject {
    struct synchronized<std::shared_ptr<as::client::IOStream>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::shared_ptr<as::client::IOStream>>> { struct shared_ptr_mutex<as::client::KVOMutex> { struct shared_ptr<as::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<as::client::IOStream> { struct IOStream *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

@property (readonly, nonatomic) unsigned int opaqueStreamToken;
@property (readonly) NSString *audioStreamTag;
@property (readonly) unsigned int ioDirection;
@property (readonly, nonatomic) unsigned int DSPFlavor;
@property (readonly, nonatomic) NSArray *DSPControlModules;
@property (readonly, nonatomic) NSArray *availableFormats;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) struct AVAudioTimeInterval { double x0; double x1; unsigned long long x2; } latency;
@property (readonly, weak) AVAudioIOController *owningIOController;
@property (readonly, nonatomic) AVAudioAggregateStreamTopology *topology;
@property (readonly, nonatomic) NSArray *ports;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setFormat:(id)a0 error:(id *)a1;
- (id)initWithImpl:(struct shared_ptr<as::client::IOStream> { struct IOStream *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithScope:(unsigned int)a0;
- (BOOL)setAudioStreamTag:(id)a0 error:(id *)a1;
- (BOOL)setDSPFlavor:(unsigned int)a0 error:(id *)a1;
- (BOOL)setPort:(id)a0 error:(id *)a1;
- (BOOL)setStreamTopology:(id)a0 error:(id *)a1;

@end
