@class NSArray;

@interface EARSpeechRecognition : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokenSausage;
@property (readonly, copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, copy, nonatomic) NSArray *oneBest;
@property (readonly, copy, nonatomic) NSArray *nBest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecognition:(id)a0;

@end
