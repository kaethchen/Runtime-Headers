@class PGTitle, NSArray;

@interface PGTitleTuple : NSObject

@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) PGTitle *subtitle;
@property (readonly, nonatomic) NSArray *locationNames;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWithTitle:(id)a0 subtitle:(id)a1;
- (id)initWithWithTitle:(id)a0 subtitle:(id)a1 locationNames:(id)a2;

@end
