@class NSDictionary, NSString;

@interface PGPetQuestion : PGSurveyQuestion {
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
- (id)initWithPetUUID:(id)a0 displayString:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
