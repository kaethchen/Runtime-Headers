@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement

@property (nonatomic) long long songPart;
@property (copy, nonatomic) NSString *songPartText;
@property (retain, nonatomic) NSArray *lines;

+ (long long)_songPartForText:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
