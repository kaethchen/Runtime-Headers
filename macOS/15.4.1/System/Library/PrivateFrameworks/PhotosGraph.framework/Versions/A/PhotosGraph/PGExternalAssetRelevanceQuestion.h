@class NSString, NSDictionary;

@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithAssetUUID:(id)a0 momentLocalIdentifiers:(id)a1 assetInferredAsRelevant:(BOOL)a2;

@end
