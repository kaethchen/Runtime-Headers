@class WBSInternalFeedbackRadarComponent, NSString, NSArray, NSURL;

@interface WBSInternalFeedbackRadar : NSObject

@property (copy, nonatomic) WBSInternalFeedbackRadarComponent *component;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionTemplate;
@property (copy, nonatomic) NSString *classification;
@property (copy, nonatomic) NSString *reproducibility;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *attachmentPaths;
@property (readonly, copy, nonatomic) NSURL *continueInTapToRadarURL;

- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 title:(id)a1 descriptionTemplate:(id)a2;

@end
