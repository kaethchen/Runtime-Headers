@class NSString, NSMutableArray, NSMutableDictionary;

@interface DRTOCFileParser : NSObject {
    NSString *tocPath;
    NSMutableArray *trackInfoList;
    NSMutableDictionary *burnInfo;
    NSMutableArray *cdTextBlocks;
    long long trackNumber;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (BOOL)parse;
- (id)burnProperties;
- (id)cdText;
- (id)extractOptionalString:(id)a0;
- (id)extractRequiredString:(id)a0;
- (id)fullPathForAuxFile:(id)a0;
- (void)parseCDText:(id)a0 forDisc:(BOOL)a1;
- (id)parseTrack:(id)a0;
- (id)parseTrackModes:(id)a0 isAudioTrack:(BOOL *)a1;
- (void)setCDTextString:(id)a0 forKey:(id)a1 ofTrack:(long long)a2 inLanguage:(long long)a3;
- (id)trackLayout;

@end
