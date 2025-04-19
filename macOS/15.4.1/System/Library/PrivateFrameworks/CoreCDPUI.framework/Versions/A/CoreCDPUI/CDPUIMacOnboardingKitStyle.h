@interface CDPUIMacOnboardingKitStyle : NSObject

@property (class, nonatomic, readonly) double modalWidth;
@property (class, nonatomic, readonly) double modalHeight;
@property (class, nonatomic, readonly) double headerImageSize;
@property (class, nonatomic, readonly) double contentWidth;
@property (class, nonatomic, readonly) double contentTopPadding;
@property (class, nonatomic, readonly) double relatedContentSpacing;
@property (class, nonatomic, readonly) double unrelatedContentSpacing;
@property (class, nonatomic, readonly) double paragraphLinkNewlineSpacing;

- (id)init;

@end
