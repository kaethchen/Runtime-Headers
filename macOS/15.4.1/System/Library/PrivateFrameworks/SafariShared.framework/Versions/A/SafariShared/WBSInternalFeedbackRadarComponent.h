@class NSString;

@interface WBSInternalFeedbackRadarComponent : NSObject <NSCopying>

@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariAutoFill;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariScribble;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariScribblePlatform;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariNewBugs;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariBookmarksModelAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariBookmarksModelIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariBookmarksModelMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariBookmarksUIIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariBookmarksUIMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariICloudTabsAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariICloudTabsIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariICloudTabsMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *webExtensionsAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariExtensionsAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariExtensionsIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariExtensionsMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariHistoryModelAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariHistoryUIIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariHistoryUIMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariStartPageAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariStartPageIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariStartPageMacOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariTabsAll;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariTabsIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariTabsMacOS;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2;

@end
