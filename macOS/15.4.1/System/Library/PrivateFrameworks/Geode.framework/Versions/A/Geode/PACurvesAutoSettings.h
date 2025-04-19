@class NSArray;

@interface PACurvesAutoSettings : IPAAutoSettings

@property (retain, nonatomic) NSArray *pointsL;
@property (retain, nonatomic) NSArray *pointsR;
@property (retain, nonatomic) NSArray *pointsG;
@property (retain, nonatomic) NSArray *pointsB;

- (void).cxx_destruct;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
