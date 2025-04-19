@class NSString, NSArray;

@interface FCPuzzleFullArchiveMenuOptionsConfiguration : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
