@class NSDictionary, NSString;

@interface PGBusinessItemQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 businessUUID:(id)a1 businessName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
