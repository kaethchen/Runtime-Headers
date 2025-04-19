@interface PAPurgeableBufferImageBacking : PABufferImageBacking

- (id)tileAtIndex:(unsigned long long)a0;
- (void)beginAccessRegion:(id)a0;
- (void)endAccessRegion:(id)a0;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)_beginAccessRegion:(id)a0;
- (void)_endAccessRegion:(id)a0;
- (id)_purgeableBuffer;
- (id)initWithPurgeableBuffer:(id)a0;
- (id)mutableTileAtIndex:(unsigned long long)a0;

@end
