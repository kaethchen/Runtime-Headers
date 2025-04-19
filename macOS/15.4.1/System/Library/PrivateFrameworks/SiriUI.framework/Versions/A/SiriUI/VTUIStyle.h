@class NSArray;

@interface VTUIStyle : NSObject {
    NSArray *_deviceStringSuffixes;
    NSArray *_deviceImageSuffixes;
    BOOL _isIpad;
    BOOL _isLargeIpad;
    BOOL _needMoreLineSpacing;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) BOOL isBuddy;
@property (nonatomic) BOOL isHeySiriAlwaysOn;

+ (id)sharedStyle;

- (id)init;
- (void).cxx_destruct;
- (id)titleFont;
- (id)subtitleFont;
- (double)horizontalPadding;
- (void)orientationChanged:(id)a0;
- (id)footerButtonFont;
- (id)buttonTextColor;
- (id)deviceDoneImage;
- (id)footerTextColor;
- (id)instructionFont;
- (double)staticOrbHeight;
- (id)footerLabelFont;
- (double)imageViewBottomOffsetFromFooter;
- (id)_deviceImageForBaseImageName:(id)a0;
- (double)continueButtonBaselineOffset;
- (id)deviceSetupImage;
- (id)deviceSpecificString:(id)a0;
- (double)footerContinueButtonMinBaselineFromText;
- (double)footerHorizontalPadding;
- (double)footerLabelLineHeight;
- (BOOL)footerShouldPinToImage;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerSkipButtonBaselineFromContinueButton;
- (double)footerTextBaselineFromTop;
- (double)headerTitleLinespacing;
- (double)imageViewTopOffset;
- (id)instructionColor;
- (double)instructionOffsetFromPrelude;
- (double)orbHeight;
- (double)orbOffsetFromTop;
- (id)preludeFont;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (BOOL)shouldSetupForMultipleTriggerPhrases;
- (BOOL)shouldSetupForMultipleTriggerPhrasesForLanguageCode:(id)a0;
- (BOOL)shouldShowFooterLine;
- (double)skipButtonBaselineBottomMargin;
- (id)statusColor;
- (id)statusFont;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitleBaselineOffset;
- (double)subtitleLineHeight;
- (BOOL)supportsSiriConversationsAndBargeIn;
- (double)tickMarkHorizontalSizeRatio;
- (double)titleBaselineOffsetFromTop;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriHorizontalPadding;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTop;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;

@end
