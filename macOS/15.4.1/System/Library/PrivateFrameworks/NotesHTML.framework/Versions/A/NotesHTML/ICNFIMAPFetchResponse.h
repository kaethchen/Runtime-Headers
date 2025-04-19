@class ICNFIMAPBodyStructureFetchResult, ICNFIMAPBodySectionFetchResult, NSArray, ICNFIMAPBodyTextFetchResult, ICNFIMAPBodyHeaderFetchResult, ICNFIMAPUidFetchResult, ICNFIMAPRFC822SizeFetchResult, ICNFIMAPModificationSequenceFetchResult, ICNFIMAPGmailLabelsFetchResult, ICNFIMAPInternalDateFetchResult, ICNFIMAPEnvelopeFetchResult, ICNFIMAPFlagsFetchResult;

@interface ICNFIMAPFetchResponse : ICNFIMAPNumericResponse

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSArray *fetchResults;
@property (readonly, nonatomic) ICNFIMAPEnvelopeFetchResult *envelopeFetchResult;
@property (readonly, nonatomic) ICNFIMAPInternalDateFetchResult *internalDateFetchResult;
@property (readonly, nonatomic) ICNFIMAPRFC822SizeFetchResult *rfc822SizeFetchResult;
@property (readonly, nonatomic) ICNFIMAPBodyStructureFetchResult *bodyStructureFetchResult;
@property (readonly, nonatomic) ICNFIMAPUidFetchResult *uidFetchResult;
@property (readonly, nonatomic) ICNFIMAPFlagsFetchResult *flagsFetchResult;
@property (readonly, nonatomic) ICNFIMAPModificationSequenceFetchResult *modificationSequenceFetchResult;
@property (readonly, nonatomic) ICNFIMAPGmailLabelsFetchResult *gmailLabelsFetchResult;
@property (readonly, nonatomic) ICNFIMAPBodyTextFetchResult *bodyTextFetchResult;
@property (readonly, nonatomic) ICNFIMAPBodyHeaderFetchResult *bodyHeaderFetchResult;
@property (readonly, nonatomic) ICNFIMAPBodySectionFetchResult *bodySectionFetchResult;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_fetchResultOfClass:(Class)a0;
- (const char *)_responseName;

@end
