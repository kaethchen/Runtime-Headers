@interface MFPStringFormat : NSObject {
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}

- (void)dealloc;
- (id)init;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (const float *)tabStops;
- (void)setFormatFlags:(unsigned int)a0;
- (unsigned int)formatFlags;
- (unsigned short)digitSubstitutionLanguage;
- (int)digitSubstitutionMethod;
- (float)firstTabOffset;
- (int)hotkeyPrefix;
- (int)lineAlignment;
- (void)setDigitSubstitutionLanguage:(unsigned short)a0;
- (void)setDigitSubstitutionMethod:(int)a0;
- (void)setFirstTabOffset:(float)a0;
- (void)setHotkeyPrefix:(int)a0;
- (void)setLineAlignment:(int)a0;
- (void)setTabStops:(const float *)a0 count:(int)a1;
- (void)setTrimming:(int)a0;
- (int)tabStopCount;
- (int)trimming;

@end
