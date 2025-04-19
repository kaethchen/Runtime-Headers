@interface FSMetadataRange : NSObject

@property (readonly) long long startOffset;
@property (readonly) unsigned long long segmentLength;
@property (readonly) unsigned long long segmentCount;

+ (id)rangeWithOffset:(long long)a0 segmentLength:(unsigned long long)a1 segmentCount:(unsigned long long)a2;

- (id)initWithOffset:(long long)a0 segmentLength:(unsigned long long)a1 segmentCount:(unsigned long long)a2;

@end
