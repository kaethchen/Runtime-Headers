@class NSString, NSArray, NSDictionary;

@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup>

@property (readonly) NSString *name;
@property (readonly) NSArray *sourceList;
@property (readonly) unsigned int acceleratorPort;
@property (copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long sampleMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (BOOL)startSampling;
- (BOOL)startSamplingWithError:(id *)a0;
- (BOOL)stopSampling;
- (BOOL)stopSamplingWithError:(id *)a0;
- (id)subDivideCounterList:(id)a0 withOptions:(id)a1;

@end
