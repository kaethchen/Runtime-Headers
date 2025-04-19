@class NSData, NSArray;

@interface VCPImageEmbeddingObservation : NSObject

@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *shape;

- (void).cxx_destruct;

@end
