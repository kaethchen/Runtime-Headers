@class NSDictionary;

@interface PUPhotoEditImageValues : NSObject

@property (copy) NSDictionary *smartToneStatistics;
@property (copy) NSDictionary *smartColorStatistics;
@property (copy) NSDictionary *semanticStyleStatistics;
@property double smartToneAutoSuggestion;
@property double smartColorAutoSuggestion;
@property (copy) NSDictionary *autoCropValues;
@property (copy) NSDictionary *autoPerspectiveValues;
@property (copy) NSDictionary *portraitValues;
@property (copy) NSDictionary *apertureValues;
@property (getter=isComplete) BOOL complete;

- (void).cxx_destruct;

@end
