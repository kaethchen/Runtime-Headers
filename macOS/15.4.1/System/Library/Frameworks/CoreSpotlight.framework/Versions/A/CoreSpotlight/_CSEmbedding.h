@class NSArray, NSDictionary, NSData;

@interface _CSEmbedding : NSObject

@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) int dimension;
@property (readonly, nonatomic) unsigned short version;
@property (readonly, nonatomic) NSArray *vectors;
@property (retain, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSData *encodedData;

- (void).cxx_destruct;
- (id)initWithEncodedData:(id)a0;
- (id)_asDictionaries;
- (id)initWithDictionaries:(id)a0;
- (id)initWithFormat:(int)a0 dimension:(int)a1 vectors:(id)a2;
- (id)initWithFormat:(int)a0 dimension:(int)a1 version:(unsigned short)a2 vectors:(id)a3;

@end
