@class CSAudioTimeConverter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverterPool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) CSAudioTimeConverter *exclaveTimeConverter;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)converterForAudioStreamId:(unsigned long long)a0;
- (id)defaultConverter;
- (id)defaultExclaveConverter;
- (id)_getAudioTimeConverterWithAudioStreamId:(unsigned long long)a0;

@end
