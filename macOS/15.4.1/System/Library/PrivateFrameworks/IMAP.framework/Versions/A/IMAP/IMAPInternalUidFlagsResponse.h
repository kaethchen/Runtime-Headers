@class NSIndexSet, IMAPFlagsFetchResult;

@interface IMAPInternalUidFlagsResponse : IMAPResponse

@property (copy, nonatomic) NSIndexSet *uids;
@property (retain, nonatomic) IMAPFlagsFetchResult *flagsFetchResult;
@property (nonatomic) char flagChangeType;

- (id)description;
- (void).cxx_destruct;

@end
