@interface _EXDecoderHack : NSCoder

@property (copy) id /* block */ contextFactory;

- (void).cxx_destruct;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)initWithContextFactory:(id /* block */)a0;

@end
