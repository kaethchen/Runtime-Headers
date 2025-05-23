@class MPModelRequest;

@interface MPModelShimRequest : MPRequest

@property (retain, nonatomic) MPModelRequest *modelRequest;

+ (Class)responseClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)middlewareClasses;

@end
