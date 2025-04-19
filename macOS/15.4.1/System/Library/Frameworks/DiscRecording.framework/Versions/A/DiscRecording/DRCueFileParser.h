@class NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface DRCueFileParser : NSObject {
    NSString *cuePath;
    NSMutableDictionary *burnInfo;
    NSMutableArray *trackInfoList;
    NSString *sourceFile;
    NSString *sourceKind;
    NSNumber *sourceLength;
    long long lastTrackIndex;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (BOOL)parse;
- (id)decodeDatatype:(id)a0;
- (id)burnProperties;
- (id)cdText;
- (id)extractString:(id)a0;
- (id)fullPathForAuxFile:(id)a0;
- (void)parseFlags:(id)a0 trackInfo:(id)a1;
- (void)parseIndexData:(id)a0 trackInfo:(id)a1;
- (void)parsePropertiesData:(id)a0 trackInfo:(id)a1;
- (long long)parseSourceFile:(id)a0;
- (id)trackInfoForIndex:(long long)a0;
- (id)trackLayout;

@end
