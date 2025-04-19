@class AUAudioUnit, NSString, NSArray, AVAudioFormat;

@interface AUAudioUnitBus : NSObject {
    BOOL _removingObserverWithContext;
    AVAudioFormat *_format;
    NSArray *_supportedChannelCounts;
    unsigned int _maximumChannelCount;
    BOOL _enabled;
}

@property (nonatomic) struct vector<BusPropertyObserver, std::allocator<BusPropertyObserver>> { struct BusPropertyObserver *__begin_; struct BusPropertyObserver *__end_; struct __compressed_pair<BusPropertyObserver *, std::allocator<BusPropertyObserver>> { struct BusPropertyObserver *__value_; } __end_cap_; } observers;
@property (readonly) AVAudioFormat *format;
@property BOOL shouldAllocateBuffer;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *name;
@property (readonly) unsigned long long index;
@property (readonly) long long busType;
@property (readonly) AUAudioUnit *ownerAudioUnit;
@property (readonly, copy) NSArray *supportedChannelLayoutTags;
@property double contextPresentationLatency;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setIndex:(unsigned long long)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)initWithFormat:(id)a0 error:(id *)a1;
- (unsigned int)maximumChannelCount;
- (void)setBusType:(long long)a0;
- (BOOL)setFormat:(id)a0 error:(id *)a1;
- (void)setMaximumChannelCount:(unsigned int)a0;
- (void)setOwnerAudioUnit:(id)a0;
- (void)setSupportedChannelCounts:(id)a0;
- (id)supportedChannelCounts;

@end
