@class NSString, NSArray, HelpSDMModel;

@interface SDMQueryResult : NSObject {
    NSString *_path;
    NSString *_book;
}

@property (readonly, nonatomic) HelpSDMModel *sdmModel;
@property (readonly, nonatomic) unsigned int docID;
@property (nonatomic) float score;
@property (nonatomic) float topScore;
@property (nonatomic) unsigned int tokenMultiplier;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *book;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *keywords;

- (void)dealloc;
- (id)description;
- (id)initWithSDMModel:(id)a0 docID:(unsigned int)a1 score:(float)a2;
- (id)initWithTitle:(id)a0 score:(float)a1;

@end
