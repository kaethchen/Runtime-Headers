@class NSDictionary, NSString;

@interface PGPersonActivityMeaningQuestion : PGSurveyQuestion {
    unsigned short _state;
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
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
