@class NSString, NSDateInterval;

@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSString *localizedTitleString;
@property (readonly, nonatomic) NSDateInterval *chapterDateInterval;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithLocalizedTitleString:(id)a0 chapterDateInterval:(id)a1;

@end
