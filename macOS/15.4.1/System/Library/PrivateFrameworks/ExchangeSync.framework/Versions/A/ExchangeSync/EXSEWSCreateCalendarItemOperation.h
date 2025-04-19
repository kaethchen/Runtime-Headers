@interface EXSEWSCreateCalendarItemOperation : EXSEWSOperation

@property (readonly, nonatomic) BOOL attachmentsSpecified;

- (BOOL)_hasAttendeesInChangeItem:(id)a0;
- (id)createCalendarItemTypeForChangeItem:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
