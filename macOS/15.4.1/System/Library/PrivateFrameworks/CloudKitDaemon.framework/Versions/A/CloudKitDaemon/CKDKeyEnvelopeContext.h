@class CKMergeableValueID, CKDPCSManager;

@interface CKDKeyEnvelopeContext : NSObject <NSCopying>

@property (nonatomic) struct _OpaquePCSShareProtection { } *shareProtection;
@property (nonatomic) BOOL encryptMergeableValueMetadata;
@property (copy, nonatomic) CKMergeableValueID *mergeableValueID;
@property (retain, nonatomic) CKDPCSManager *pcsManager;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)envelopeContextWithIdentifier:(id)a0 error:(id *)a1;

@end
