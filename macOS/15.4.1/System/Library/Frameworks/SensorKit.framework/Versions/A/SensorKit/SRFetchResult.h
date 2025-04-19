@class NSData, NSDictionary, SRCursor;

@interface SRFetchResult : NSObject <NSCopying>

@property (retain) NSData *sampleData;
@property (retain) NSDictionary *metadata;
@property (retain) NSDictionary *configuration;
@property (retain) Class sampleClass;
@property (retain, nonatomic) SRCursor *_cursor;
@property (readonly, copy) id sample;
@property (readonly) double timestamp;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_sensorConfiguration;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 timestamp:(double)a2 metadata:(id)a3 configuration:(id)a4 cursor:(id)a5 sampleClass:(Class)a6;
- (id)initWithData:(id)a0 timestamp:(double)a1 metadata:(id)a2 configuration:(id)a3 cursor:(id)a4 sampleClass:(Class)a5;

@end
