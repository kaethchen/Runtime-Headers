@class NSString;

@interface FCPuzzleRank : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) BOOL defaultRank;
@property (readonly, nonatomic) BOOL isProdigyLevel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(long long)a1;

@end
