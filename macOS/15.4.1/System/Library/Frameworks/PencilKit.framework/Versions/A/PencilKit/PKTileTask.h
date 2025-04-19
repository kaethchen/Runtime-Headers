@class NSArray, PKRendererTile;

@interface PKTileTask : NSObject

@property (readonly, nonatomic) NSArray *renderStrokes;
@property (readonly, nonatomic) NSArray *additionalStrokes;
@property (readonly, nonatomic) PKRendererTile *tile;
@property (readonly, nonatomic) long long renderCount;
@property (readonly, nonatomic) id /* block */ completionBlock;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStrokes:(id)a0 additionalStrokes:(id)a1 intoTile:(id)a2 completionBlock:(id /* block */)a3;

@end
