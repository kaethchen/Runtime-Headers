@class NSString, NSDictionary;

@interface PGStoryPromptSuggestionQuestion : PGSurveyQuestion {
    void /* unknown type, empty encoding */ storedEntityIdentifier;
    void /* unknown type, empty encoding */ storedLocalFactoryScore;
    void /* unknown type, empty encoding */ storedState;
    void /* unknown type, empty encoding */ promptText;
    void /* unknown type, empty encoding */ isValidated;
    void /* unknown type, empty encoding */ assetCount;
    void /* unknown type, empty encoding */ mcAvailabilityStatus;
}

@property (nonatomic, readonly) NSString *entityIdentifier;
@property (nonatomic, readonly) double localFactoryScore;
@property (nonatomic) unsigned short state;
@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short displayType;
@property (nonatomic, readonly) unsigned short entityType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPromptId:(id)a0 promptText:(id)a1 isValidated:(BOOL)a2 assetCount:(long long)a3 mcAvailabilityStatus:(long long)a4 localFactoryScore:(double)a5;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;

@end
