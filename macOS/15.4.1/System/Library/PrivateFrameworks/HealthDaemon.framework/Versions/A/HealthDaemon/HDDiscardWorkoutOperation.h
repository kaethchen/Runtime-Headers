@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *builderIdentifier;

- (void).cxx_destruct;
- (id)initWithBuilderIdentifier:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
