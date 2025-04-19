@class MTRAttributePath, NSError;

@interface MTRAttributeReport : NSObject

@property (readonly, copy, nonatomic) MTRAttributePath *path;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (id)initWithPath:(const void *)a0 value:(id)a1 error:(id)a2;

@end
