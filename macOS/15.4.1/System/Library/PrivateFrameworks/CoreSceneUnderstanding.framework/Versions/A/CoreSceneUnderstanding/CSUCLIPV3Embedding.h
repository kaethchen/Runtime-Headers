@protocol CSUBuffer;

@interface CSUCLIPV3Embedding : NSObject

@property (readonly) id<CSUBuffer> buffer;
@property (readonly) long long type;
@property (readonly) long long revision;

+ (id)embeddingWithBuffer:(id)a0 type:(long long)a1 revision:(long long)a2;

- (void).cxx_destruct;
- (BOOL)isCompatibleWith:(id)a0;
- (id)initWithBuffer:(id)a0 type:(long long)a1 revision:(long long)a2;

@end
