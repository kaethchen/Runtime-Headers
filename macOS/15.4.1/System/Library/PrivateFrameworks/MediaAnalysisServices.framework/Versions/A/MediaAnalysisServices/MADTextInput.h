@class NSArray, NSMutableArray;

@interface MADTextInput : NSObject <NSSecureCoding> {
    NSMutableArray *_segments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *segments;

+ (long long)csuTokenizerRevision;
+ (long long)csuTokenizerRevisionForEmbeddingVersion:(unsigned long long)a0;
+ (long long)tokenizerRevision;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void)addText:(id)a0;
- (void)addEntityUUID:(id)a0;
- (void)addTokenIDs:(id)a0;

@end
