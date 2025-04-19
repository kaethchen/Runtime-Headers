@interface BMStream : BMStreamBase

- (id)source;
- (id)publisher;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)publisherWithOptions:(id)a0;
- (id)pruner;
- (id)publisherWithUseCase:(id)a0;
- (id)sourceWithUser:(unsigned int)a0;
- (id)prunerForDevice:(id)a0;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;

@end
