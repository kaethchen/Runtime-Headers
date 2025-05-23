@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject

@property (readonly, nonatomic) VNRequest *parentRequest;
@property (readonly, copy, nonatomic) NSArray *orderedChildRequests;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParentRequest:(id)a0 orderedChildRequests:(id)a1;

@end
