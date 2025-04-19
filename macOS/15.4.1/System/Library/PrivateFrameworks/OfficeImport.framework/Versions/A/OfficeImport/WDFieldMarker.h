@class NSData;

@interface WDFieldMarker : WDRunWithCharacterProperties {
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned char mZombieEmbed : 1;
    unsigned char mResultDirty : 1;
    unsigned char mResultEdited : 1;
    unsigned char mLocked : 1;
    unsigned char mPrivateResult : 1;
    unsigned char mNested : 1;
    unsigned char mHasSeparator : 1;
}

- (id)description;
- (void).cxx_destruct;
- (id)data;
- (void)setData:(id)a0;
- (unsigned char)fieldType;
- (void)setLocked:(BOOL)a0;
- (id)initWithParagraph:(id)a0;
- (BOOL)hasSeparator;
- (BOOL)locked;
- (void)setFieldType:(unsigned char)a0;
- (int)runType;
- (void)setResultDirty:(BOOL)a0;
- (void)setZombieEmbed:(BOOL)a0;
- (int)fieldMarkerType;
- (int)fieldPosition;
- (BOOL)nested;
- (BOOL)privateResult;
- (BOOL)resultDirty;
- (BOOL)resultEdited;
- (void)setFieldMarkerType:(int)a0;
- (void)setFieldPosition:(int)a0;
- (void)setHasSeparator:(BOOL)a0;
- (void)setNested:(BOOL)a0;
- (void)setPrivateResult:(BOOL)a0;
- (void)setResultEdited:(BOOL)a0;
- (BOOL)zombieEmbed;

@end
