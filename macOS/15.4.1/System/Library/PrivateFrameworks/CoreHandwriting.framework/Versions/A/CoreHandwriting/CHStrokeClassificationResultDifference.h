@class NSSet;

@interface CHStrokeClassificationResultDifference : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSSet *addedTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *removedTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *addedNonTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *removedNonTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *transitionedTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *transitionedNonTextStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *addedStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *removedStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *transitionedStrokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithStrokeIdentifiersForAddedText:(id)a0 removedText:(id)a1 addedNonText:(id)a2 removedNonText:(id)a3 transitionedText:(id)a4 transitionedNonText:(id)a5;

@end
