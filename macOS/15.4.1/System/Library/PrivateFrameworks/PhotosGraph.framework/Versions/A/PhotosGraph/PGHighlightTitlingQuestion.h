@class NSString, NSDictionary;

@interface PGHighlightTitlingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithHighlightTitle:(id)a0 legacyHighlightTitle:(id)a1 keyAssetUUID:(id)a2 localFactoryScore:(double)a3 duplicatedTitles:(BOOL)a4;
- (double)localFactoryScore;

@end
