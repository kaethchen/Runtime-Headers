@class NSArray, NSMutableArray;

@interface SLODLDInputTokenParams : NSObject

@property (retain, nonatomic) NSMutableArray *mlInputIds;
@property (retain, nonatomic) NSMutableArray *mlTypeIds;
@property (retain, nonatomic) NSMutableArray *mlAttnMask;
@property (retain, nonatomic) NSMutableArray *mlPadMask;
@property (retain, nonatomic) NSArray *shape;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (void)_initWithDefaults;
- (void)populateWithTokens:(id)a0 error:(id *)a1;

@end
