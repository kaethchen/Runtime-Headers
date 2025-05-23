@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject

@property (readonly, copy, nonatomic) TSDLineEnd *headLineEnd;
@property (readonly, copy, nonatomic) TSDLineEnd *tailLineEnd;
@property (readonly, copy, nonatomic) TSDStroke *stroke;

+ (id)lineWithStroke:(id)a0 headLineEnd:(id)a1 tailLineEnd:(id)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStroke:(id)a0 headLineEnd:(id)a1 tailLineEnd:(id)a2;

@end
