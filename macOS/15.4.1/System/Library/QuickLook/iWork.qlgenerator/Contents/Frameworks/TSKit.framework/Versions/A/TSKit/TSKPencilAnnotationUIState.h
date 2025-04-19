@class TSUColor, NSUserDefaults, NSHashTable;

@interface TSKPencilAnnotationUIState : TSPObject {
    NSUserDefaults *_userDefaults;
    unsigned long long _currentToolType;
    NSHashTable *_observers;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolWidth;
    TSUColor *_highlighterToolColor;
    double _highlighterToolOpacity;
    double _highlighterToolWidth;
}

+ (double)p_inkWidthForToolType:(unsigned long long)a0 strokeWidth:(double)a1;
+ (id)strokeWidthsForToolType:(unsigned long long)a0;

- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 userDefaults:(id)a1;
- (unsigned long long)p_defaultToolType;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (void)p_setDefaultToolType:(unsigned long long)a0;
- (void)p_setupDefaultValues;
- (unsigned long long)p_toolTypeFromUserDefaultsRepresentation:(long long)a0;
- (long long)p_userDefaultsRepresentationForToolType:(unsigned long long)a0;

@end
