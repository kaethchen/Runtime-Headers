@class NSNumber, MOBoolSettingMetadata;

@interface MOCalculatorSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyInputModeRPNMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyInputModeUnitConversionMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMathPaperSolvingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyModeMathPaperMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyModeProgrammerMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyModeScientificMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceSquareRootOnBasicCalculatorMetadata;

@property (retain, nonatomic) NSNumber *denyInputModeRPN;
@property (retain, nonatomic) NSNumber *denyInputModeUnitConversion;
@property (retain, nonatomic) NSNumber *denyMathPaperSolving;
@property (retain, nonatomic) NSNumber *denyModeMathPaper;
@property (retain, nonatomic) NSNumber *denyModeProgrammer;
@property (retain, nonatomic) NSNumber *denyModeScientific;
@property (retain, nonatomic) NSNumber *forceSquareRootOnBasicCalculator;

+ (id)groupName;

@end
