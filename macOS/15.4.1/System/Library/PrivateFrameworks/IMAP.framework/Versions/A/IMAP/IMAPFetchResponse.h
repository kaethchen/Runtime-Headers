@class IMAPModificationSequenceFetchResult, IMAPInternalDateFetchResult, IMAPGmailLabelsFetchResult, IMAPAppleRemoteLinksFetchResult, IMAPBodyTextFetchResult, IMAPEnvelopeFetchResult, IMAPBodySectionFetchResult, IMAPBodyStructureFetchResult, IMAPBodyHeaderFetchResult, NSArray, IMAPUidFetchResult, IMAPRFC822SizeFetchResult, IMAPFlagsFetchResult;

@interface IMAPFetchResponse : IMAPNumericResponse

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSArray *fetchResults;
@property (readonly, nonatomic) IMAPEnvelopeFetchResult *envelopeFetchResult;
@property (readonly, nonatomic) IMAPInternalDateFetchResult *internalDateFetchResult;
@property (readonly, nonatomic) IMAPRFC822SizeFetchResult *rfc822SizeFetchResult;
@property (readonly, nonatomic) IMAPBodyStructureFetchResult *bodyStructureFetchResult;
@property (readonly, nonatomic) IMAPUidFetchResult *uidFetchResult;
@property (readonly, nonatomic) IMAPFlagsFetchResult *flagsFetchResult;
@property (readonly, nonatomic) IMAPModificationSequenceFetchResult *modificationSequenceFetchResult;
@property (readonly, nonatomic) IMAPGmailLabelsFetchResult *gmailLabelsFetchResult;
@property (readonly, nonatomic) IMAPAppleRemoteLinksFetchResult *appleRemoteLinksFetchResult;
@property (readonly, nonatomic) IMAPBodyTextFetchResult *bodyTextFetchResult;
@property (readonly, nonatomic) IMAPBodyHeaderFetchResult *bodyHeaderFetchResult;
@property (readonly, nonatomic) IMAPBodySectionFetchResult *bodySectionFetchResult;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_fetchResultOfClass:(Class)a0;
- (const char *)_responseName;

@end
