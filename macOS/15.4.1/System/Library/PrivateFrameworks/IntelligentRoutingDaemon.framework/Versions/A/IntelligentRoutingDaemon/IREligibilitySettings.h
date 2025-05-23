@class NSNumber;

@interface IREligibilitySettings : NSObject

@property (retain, nonatomic) NSNumber *upRankToOneTapThr;
@property (retain, nonatomic) NSNumber *uprankToAutorouteThr;
@property (retain, nonatomic) NSNumber *downrankToNoneThr;
@property (retain, nonatomic) NSNumber *downrankToNoneWithIgnoringThr;
@property (retain, nonatomic) NSNumber *downrankToOneTapThr;
@property (retain, nonatomic) NSNumber *initialStateIsOneTap;
@property (nonatomic) BOOL useBrokeredScanForMain;
@property (nonatomic) BOOL useBrokeredScanForSecondary;

- (void).cxx_destruct;

@end
