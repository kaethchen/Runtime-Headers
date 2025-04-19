@class NSString;

@interface FCPuzzleFullArchiveMenuOptionItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) long long difficultyIndex;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 icon:(id)a1 level:(unsigned long long)a2 difficultyIndex:(long long)a3;

@end
