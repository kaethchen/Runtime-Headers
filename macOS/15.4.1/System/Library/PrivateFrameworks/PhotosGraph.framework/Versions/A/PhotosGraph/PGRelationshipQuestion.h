@class NSDictionary, NSString;

@interface PGRelationshipQuestion : PGSurveyQuestion {
    unsigned short _state;
    unsigned short _displayType;
    unsigned short _entityType;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithRelationshipLabel:(id)a0 confirmedPersonUUID:(id)a1;
- (id)initWithRelationshipLabel:(id)a0 personUUID:(id)a1 displayString:(id)a2 localFactoryScore:(double)a3;
- (id)initWithRelationshipLabel:(id)a0 personUUID:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
