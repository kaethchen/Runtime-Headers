@class NSDate, EDProcessors, NSString, EDWarnings, ECMappingContext, NSMutableArray, EDReference, ESDContainer, EDResources;

@interface EDWorkbook : OCDDocument {
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned long long mActiveSheetIndex;
    NSDate *mDateBaseDate;
    int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    NSMutableArray *mBulletBlips;
    ESDContainer *mEscherDrawingGroup;
    BOOL mIsOutOfMemoryConditionDetected;
}

+ (id)impliedColorMap;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)resources;
- (id)temporaryDirectory;
- (id)fileName;
- (id)warnings;
- (void)setResources:(id)a0;
- (void)applyProcessors;
- (void)setActiveSheet:(id)a0;
- (id)activeSheet;
- (unsigned long long)activeSheetIndex;
- (void)addOtherResources:(id)a0;
- (void)addSheet:(id)a0;
- (id)bulletBlips;
- (int)dateBase;
- (id)dateBaseDate;
- (id)escherDrawingGroup;
- (unsigned long long)indexOfSheet:(id)a0;
- (unsigned long long)indexOfSheetWithName:(id)a0;
- (id)initWithFileName:(id)a0 andStringOptimization:(BOOL)a1;
- (id)initWithStringOptimization:(BOOL)a0;
- (BOOL)isOutOfMemoryDetected;
- (unsigned int)legacyDateBase;
- (id)mappingContext;
- (void)outOfMemoryDetected;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeSheetAtIndex:(unsigned long long)a0;
- (void)removeWorksheetAtIndex:(unsigned int)a0;
- (void)setActiveSheetIndex:(unsigned long long)a0;
- (void)setDateBase:(int)a0;
- (void)setEscherDrawingGroup:(id)a0;
- (void)setMappingContext:(id)a0;
- (void)setTemporaryDirectory:(id)a0;
- (void)setVisibleRange:(id)a0;
- (id)sheetAtIndex:(unsigned long long)a0;
- (id)sheetAtIndex:(unsigned long long)a0 loadIfNeeded:(BOOL)a1;
- (unsigned long long)sheetCount;
- (id)visibleRange;
- (id)workbookName;

@end
