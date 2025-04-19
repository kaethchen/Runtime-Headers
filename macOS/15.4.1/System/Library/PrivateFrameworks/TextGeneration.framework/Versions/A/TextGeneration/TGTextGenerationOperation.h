@class TGTextGenerationOutputConstraint, TGTextGenerationPrompt, NSString;

@interface TGTextGenerationOperation : NSObject <NSCopying, NSMutableCopying> {
    NSString *_description;
}

@property (copy) TGTextGenerationOutputConstraint *outputConstraint;
@property (getter=shouldProduceOutputStream) BOOL produceOutputStream;
@property (readonly, copy) TGTextGenerationPrompt *prompt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0;

@end
