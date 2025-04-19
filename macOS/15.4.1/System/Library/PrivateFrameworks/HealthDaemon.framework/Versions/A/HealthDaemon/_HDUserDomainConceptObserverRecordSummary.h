@class NSArray;

@interface _HDUserDomainConceptObserverRecordSummary : NSObject

@property (readonly, copy, nonatomic) NSArray *journaledConcepts;
@property (readonly, copy, nonatomic) NSArray *addedConcepts;
@property (readonly, copy, nonatomic) NSArray *updatedConcepts;
@property (readonly, copy, nonatomic) NSArray *removedConcepts;

- (id)init;
- (void).cxx_destruct;
- (id)initWithJournaledConcepts:(id)a0 addedConcepts:(id)a1 updatedConcepts:(id)a2 removedConcepts:(id)a3;

@end
