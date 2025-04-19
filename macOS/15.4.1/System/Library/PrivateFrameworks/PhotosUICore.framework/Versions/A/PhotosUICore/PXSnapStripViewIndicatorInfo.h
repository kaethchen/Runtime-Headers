@class NSColor;

@interface PXSnapStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL disabled;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOffset:(double)a0 color:(id)a1 style:(unsigned long long)a2;
- (BOOL)isEqualToIndicatorInfo:(id)a0;

@end
