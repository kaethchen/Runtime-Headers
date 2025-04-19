@interface ASDTIOA2OffsetStream : ASDTIOA2Stream

@property (nonatomic) long long sampleTimeOffset;

- (id /* block */)readInputBlock;

@end
