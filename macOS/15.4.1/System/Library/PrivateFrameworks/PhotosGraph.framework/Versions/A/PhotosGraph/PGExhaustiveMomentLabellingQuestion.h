@class NSDictionary, NSString;

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    double _localFactoryScore;
    NSString *_entityIdentifier;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithMomentUUID:(id)a0 localFactoryScore:(double)a1 meaningLabels:(id)a2;
- (double)localFactoryScore;

@end
