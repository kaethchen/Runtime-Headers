@class NSString, NSOrderedSet, WBSAutoFillInternalFeedbackDiagnosticsData, NSURL, NSMutableDictionary;

@interface WBSAutoFillInternalFeedbackController : NSObject {
    NSMutableDictionary *_detailResponses;
}

@property (class, readonly, copy, nonatomic) NSString *titleText;
@property (class, readonly, copy, nonatomic) NSString *informativeText;
@property (class, readonly, copy, nonatomic) NSString *isRegressionOptionText;
@property (class, readonly, copy, nonatomic) NSString *knownWorkingBuildPlaceholderText;

@property (readonly, copy, nonatomic) WBSAutoFillInternalFeedbackDiagnosticsData *diagnosticsData;
@property (nonatomic) unsigned long long selectedFeedbackCategory;
@property (readonly, copy, nonatomic) NSOrderedSet *detailTypesForSelectedFeedbackCategory;
@property (nonatomic, getter=isRegression) BOOL regression;
@property (copy, nonatomic) NSString *knownWorkingBuild;
@property (nonatomic) unsigned long long selectedAttachmentsType;
@property (readonly, copy, nonatomic) NSString *attachmentDetailsText;
@property (readonly, nonatomic) BOOL canContinueInTapToRadar;
@property (readonly, copy, nonatomic) NSURL *continueInTapToRadarURL;

+ (id)placeholderForFeedbackDetailType:(id)a0;
+ (id)titleForAttachmentsType:(unsigned long long)a0;
+ (id)titleForFeedbackCategory:(unsigned long long)a0;
+ (id)titleForFeedbackDetailType:(id)a0;

- (void).cxx_destruct;
- (id)_radarTitleComponentForDetails;
- (id)initWithDiagnosticsData:(id)a0;
- (id)responseForDetailType:(id)a0;
- (void)setResponse:(id)a0 forDetailType:(id)a1;

@end
