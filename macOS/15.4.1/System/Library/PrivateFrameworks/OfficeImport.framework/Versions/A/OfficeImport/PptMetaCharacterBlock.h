@interface PptMetaCharacterBlock : NSObject {
    int mType;
    int mPosition;
    int mExtraData;
}

- (int)type;
- (int)position;
- (void)setPosition:(int)a0;
- (int)extraData;
- (id)initWithType:(int)a0 position:(int)a1;
- (id)initWithType:(int)a0 position:(int)a1 extraData:(int)a2;

@end
