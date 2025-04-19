@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isNonTextType:(int)a0;
+ (BOOL)isTextType:(int)a0;

- (id)description;
- (id)init;
- (void)setType:(int)a0;
- (int)type;
- (void)setOrientation:(int)a0;
- (void)setSize:(int)a0;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (int)size;
- (int)orientation;
- (void)setBoundsTrack:(int)a0;
- (int)boundsTrack;

@end
