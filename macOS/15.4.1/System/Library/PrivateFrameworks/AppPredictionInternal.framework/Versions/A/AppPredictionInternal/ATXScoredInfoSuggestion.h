@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXScoredInfoSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;
@property (readonly, nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithSuggestion:(id)a0 featureSet:(id)a1 score:(double)a2;

@end
