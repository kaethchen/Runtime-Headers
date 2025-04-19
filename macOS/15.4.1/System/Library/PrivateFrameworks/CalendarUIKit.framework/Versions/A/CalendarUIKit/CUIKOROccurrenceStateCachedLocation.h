@class NSString, NSAttributedString, NSURL;

@interface CUIKOROccurrenceStateCachedLocation : NSObject

@property (readonly, nonatomic) NSAttributedString *generatedLocationString;
@property (readonly, nonatomic) NSString *locationImageName;
@property (readonly, nonatomic) NSString *originalOccurrenceLocation;
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction;
@property (readonly, nonatomic) BOOL originalOccurrenceLocationIsPrediction;
@property (readonly, nonatomic) BOOL originalHasNewTimeProposed;
@property (readonly, nonatomic) NSURL *originalConferenceURL;

- (void).cxx_destruct;
- (id)initWithGeneratedLocationString:(id)a0 locationImageName:(id)a1 originalOccurrenceLocation:(id)a2 originalOccurrenceLocationWithoutPrediction:(id)a3 originalOccurrenceLocationIsPrediction:(BOOL)a4 originalHasNewTimeProposed:(BOOL)a5 originalConferenceURL:(id)a6;

@end
