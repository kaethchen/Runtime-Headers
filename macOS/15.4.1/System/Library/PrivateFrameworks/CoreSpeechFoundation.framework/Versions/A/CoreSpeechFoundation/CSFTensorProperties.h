@class NSArray;

@interface CSFTensorProperties : NSObject

@property (retain, nonatomic) NSArray *shape;
@property (nonatomic) unsigned long long dataType;

+ (id)propertyWithShape:(id)a0 dataType:(unsigned long long)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
