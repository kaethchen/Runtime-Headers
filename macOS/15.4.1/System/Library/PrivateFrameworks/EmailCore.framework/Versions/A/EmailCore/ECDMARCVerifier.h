@protocol ECDMARCRecordSource;

@interface ECDMARCVerifier : NSObject

@property (readonly, nonatomic) id<ECDMARCRecordSource> recordSource;

+ (void)partitionDKIMSignatureHeadersByIdentifierAlignment:(id)a0 forSender:(id)a1 strictAligned:(out id *)a2 relaxedAligned:(out id *)a3 unaligned:(out id *)a4;

- (void).cxx_destruct;
- (long long)_alignmentModeForDMARCRecord:(id)a0;
- (long long)_policyForTag:(id)a0 dmarcRecord:(id)a1;
- (id)_recordsForDomain:(id)a0 error:(out id *)a1;
- (long long)dmarcStatusForSender:(id)a0 dkimResult:(BOOL)a1 identifierAlignment:(long long)a2 receiverPolicy:(out long long *)a3;
- (id)initWithRecordSource:(id)a0;

@end
