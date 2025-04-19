@interface ASDTIOA2LegacyOffsetStream : ASDTIOA2LegacyStream

@property (nonatomic) long long sampleTimeOffset;

- (id /* block */)readInputBlock;

@end
