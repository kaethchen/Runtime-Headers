@interface EXSEWSCreateResponseOperation : EXSEWSOperation

+ (long long)determineEventDispositionType:(id)a0;

- (id)initWithProtocol:(id)a0;
- (BOOL)executeMeetingItemDeletionsForEventFromChangeItem:(id)a0 withMeetingsForDeletion:(id)a1;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
