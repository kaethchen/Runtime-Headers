@class NSArray, NSMutableArray, NSString;

@interface VUIGenresLabel : VUILabel

@property (retain, nonatomic) NSMutableArray *adjustedGenres;
@property (retain, nonatomic) NSArray *genres;
@property (retain, nonatomic) NSString *genreSeparator;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;
- (void)update;
- (void)updateGenresToFit;

@end
