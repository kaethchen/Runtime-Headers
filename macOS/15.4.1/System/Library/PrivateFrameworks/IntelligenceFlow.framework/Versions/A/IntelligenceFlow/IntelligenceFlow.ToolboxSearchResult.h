@interface IntelligenceFlow.ToolboxSearchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ similarity;
    void /* unknown type, empty encoding */ toolEmbeddingSnippet;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
