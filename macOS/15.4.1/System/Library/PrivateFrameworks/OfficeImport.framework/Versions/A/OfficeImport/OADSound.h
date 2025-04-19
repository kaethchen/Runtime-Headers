@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (BOOL)isLoaded;
- (void)setSizeInBytes:(int)a0;
- (int)sizeInBytes;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
