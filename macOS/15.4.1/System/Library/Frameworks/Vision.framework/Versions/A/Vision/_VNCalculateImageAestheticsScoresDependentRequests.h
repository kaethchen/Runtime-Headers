@class VNClassifyJunkImageRequest, VNClassifyImageAestheticsRequest;

@interface _VNCalculateImageAestheticsScoresDependentRequests : NSObject

@property (readonly) VNClassifyImageAestheticsRequest *oldAestheticsRequest;
@property (readonly) VNClassifyJunkImageRequest *junkRequest;

- (void).cxx_destruct;
- (id)requests;
- (id)initWithRevision:(unsigned long long)a0 error:(id *)a1;

@end
