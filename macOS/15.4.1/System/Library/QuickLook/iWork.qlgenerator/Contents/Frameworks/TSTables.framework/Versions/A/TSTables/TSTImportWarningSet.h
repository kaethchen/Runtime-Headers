@class NSSet, NSString, NSMutableSet;

@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing> {
    NSMutableSet *_warnings;
    BOOL _cachedHashValValid;
    unsigned long long _cachedHashVal;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSSet *warnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyWarningSet;
+ (id)warningSetForErrorTokenFormula:(id)a0;
+ (id)cellDiffClearingAllWarningsWithContext:(id)a0;
+ (id)warningSetFor3DReferenceFormula:(id)a0;
+ (id)warningSetForArrayModeWarning:(id)a0;
+ (id)warningSetForArrayedFormula:(id)a0;
+ (id)warningSetForCondFormatAboveAvgEqualAvg;
+ (id)warningSetForCondFormatAboveAvgStdDev;
+ (id)warningSetForCondFormatComplexFormula;
+ (id)warningSetForCondFormatContainsErrors;
+ (id)warningSetForCondFormatExpr;
+ (id)warningSetForCondFormatNotContainsErrors;
+ (id)warningSetForCondFormatParamatersNotAllTheSame;
+ (id)warningSetForCondFormatStopIfTrue;
+ (id)warningSetForCondFormatUnsupportedOperator;
+ (id)warningSetForCondFormatUnsupportedStyling;
+ (id)warningSetForCondFormatUnsupportedTimePeriod;
+ (id)warningSetForDifferentBehaviorForFunctionFormula:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForDurationFormatRangeChanged;
+ (id)warningSetForExternalReferenceFormula:(id)a0;
+ (id)warningSetForFilteredColumnFormulaNotCopied;
+ (id)warningSetForFormulaReplacedForExcelCompat:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForNaturalLanguageFormula:(id)a0;
+ (id)warningSetForReferenceOutOfBoundsFormula:(id)a0;
+ (id)warningSetForSharedFormulaBaseNotFoundFormula:(id)a0;
+ (id)warningSetForTransposeUnmodifiedWithIssues;
+ (id)warningSetForTransposedWithIssues:(id)a0;
+ (id)warningSetForTransposedWithoutIssues:(id)a0;
+ (id)warningSetForUnknownName:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForUnsupportedCondFormat;
+ (id)warningSetForUnsupportedDataFormat:(id)a0;
+ (id)warningSetForUnsupportedFormula:(id)a0;
+ (id)warningSetForUnsupportedFunction:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForUnsupportedNameFormula:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForWarning:(id)a0;
+ (id)warningSetForWarnings:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addWarning:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)removeWarning:(id)a0;
- (id)initFromArchive:(const void *)a0;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (long long)TSTImportFormulaWarningTypeFromArchive:(int)a0;
- (int)TSTImportFormulaWarningTypeToArchive:(long long)a0;
- (BOOL)areAnySet;
- (id)cellDiffClearingWarningsWithContext:(id)a0;
- (BOOL)containsWarningOfType:(long long)a0;
- (id)individualWarnings;
- (id)localizedWarningStrings;
- (id)localizedWarningStringsForCalcEngine:(id)a0 forTable:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)p_isPersistedWithFormulaWarningTypeEnumeration:(long long)a0;
- (id)sortedWarnings;
- (unsigned long long)tst_dataObjectHash;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (id)warningSetByAddingWarningsFromSet:(id)a0;
- (id)warningSetByRemovingWarningsOfTypes:(id)a0;

@end
