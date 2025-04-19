@class VNRequest;
@protocol NSObject, NSCopying;

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) id<NSObject, NSCopying> observationsCacheKey;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 observationsCacheKey:(id)a1;

@end
