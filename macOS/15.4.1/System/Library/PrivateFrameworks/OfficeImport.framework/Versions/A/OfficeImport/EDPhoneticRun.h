@interface EDPhoneticRun : NSObject {
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (id)description;
- (id)init;
- (unsigned int)charIndex;
- (void)setCharIndex:(unsigned int)a0;
- (void)adjustIndex:(unsigned long long)a0;
- (unsigned int)charBaseCount;
- (unsigned int)charBaseIndex;
- (void)setCharBaseCount:(unsigned int)a0;
- (void)setCharBaseIndex:(unsigned int)a0;

@end
