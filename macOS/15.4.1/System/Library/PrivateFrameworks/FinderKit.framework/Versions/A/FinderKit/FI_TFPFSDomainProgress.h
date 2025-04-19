@class FI_TCloudProgressObserver;

@interface FI_TFPFSDomainProgress : NSObject {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _domainRootNode;
}

@property (readonly, nonatomic) FI_TCloudProgressObserver *cloudProgress;
@property (readonly, nonatomic) struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } currentProgressPercentage;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
