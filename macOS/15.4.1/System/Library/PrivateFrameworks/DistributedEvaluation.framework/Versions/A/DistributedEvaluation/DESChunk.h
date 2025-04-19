@class NSString, NSNumber, NSMutableData;

@interface DESChunk : NSObject

@property (readonly, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *clippingBound;
@property (readonly, nonatomic) NSMutableData *data;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 clippingBound:(id)a1 data:(id)a2;

@end
