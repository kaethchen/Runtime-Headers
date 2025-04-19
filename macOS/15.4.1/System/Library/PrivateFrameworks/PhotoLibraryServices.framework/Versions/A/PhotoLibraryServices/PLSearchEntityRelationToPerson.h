@class NSString;

@interface PLSearchEntityRelationToPerson : NSObject

@property (retain, nonatomic) NSString *personUUID;
@property (nonatomic) short relationType;
@property (nonatomic) double relationTypeConfidence;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPerson:(id)a0 relationType:(short)a1 relationTypeConfidence:(double)a2;

@end
