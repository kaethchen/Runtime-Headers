@class NSString, NSArray;

@interface CLSSurveyAnswerItem : CLSObject <CLSRelationable, CLSMutableAssetAdopter> {
    NSString *_surveyID;
    NSString *_responderPersonID;
    long long _answerType;
    NSString *_questionID;
    NSString *_textResponse;
    long long _selectedIndex;
    double _continuousSliderValue;
    long long _state;
    long long _action;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *questionID;
@property (copy, nonatomic) NSString *surveyID;
@property (copy, nonatomic) NSString *responderPersonID;
@property (nonatomic) long long state;
@property (nonatomic) long long action;
@property (nonatomic) long long answerType;
@property (copy, nonatomic) NSString *textResponse;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) double continuousSliderValue;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)identifierForSurveyID:(id)a0 questionID:(id)a1 responderID:(id)a2;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)_answerUpdated;
- (void)addAsset:(id)a0;
- (id)initWithSurveyID:(id)a0 questionID:(id)a1 responderID:(id)a2;
- (void)mergeWithObject:(id)a0;
- (void)removeAsset:(id)a0;

@end
