@interface KHThumbnailRequest : NSObject

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long sizeType;
@property (readonly, nonatomic) id /* block */ completion;

+ (id)requestWithScale:(double)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
